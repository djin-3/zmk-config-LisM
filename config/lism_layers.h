/*
 * LisM のレイヤ番号。
 * config/lism.keymap と snippets/trackball-central/trackball.overlay の両方から include する。
 * keymap の中のレイヤの並び順（上から 0, 1, 2 ...）と必ず一致させること。
 * 番号が大きいほど優先。マウス層は薙刀式より上に置く（かな入力中もクリックできるように）。
 */
#ifndef LISM_LAYERS_H
#define LISM_LAYERS_H

#define L_DEF    0  /* 英字 */
#define L_NUM    1  /* 数字 */
#define L_MARK   2  /* 記号 */
#define L_DEV    3  /* BT など */
#define L_NAGI   4  /* 薙刀式 */
#define L_MOUSE  5  /* オートマウス */
#define L_SCROLL 6  /* マウス層で S / L を押している間のスクロール */
#define L_MHOLD  7  /* Tab を押している間のマウス層。オートマウスの1秒では切れない */

#endif
