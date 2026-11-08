// FUN_01732df0 @ 01732df0 size=708 calls_out=6 calls_in=0
// strings: NIST P-521

/* WARNING: Removing unreachable block (ram,0x0173301c) */
/* WARNING: Removing unreachable block (ram,0x01732ff0) */
/* WARNING: Removing unreachable block (ram,0x01732fe0) */
/* WARNING: Removing unreachable block (ram,0x01732f88) */
/* WARNING: Removing unreachable block (ram,0x01732f80) */
/* WARNING: Removing unreachable block (ram,0x01732f30) */
/* WARNING: Removing unreachable block (ram,0x01732e58) */
/* WARNING: Removing unreachable block (ram,0x01732e38) */
/* WARNING: Removing unreachable block (ram,0x01732e30) */
/* WARNING: Removing unreachable block (ram,0x01732f4c) */
/* WARNING: Removing unreachable block (ram,0x01732fa0) */
/* WARNING: Removing unreachable block (ram,0x01732fa8) */
/* WARNING: Removing unreachable block (ram,0x01733014) */
/* WARNING: Removing unreachable block (ram,0x017330b0) */

undefined8 FUN_01732df0(void)

{
  undefined4 uVar1;
  
  DAT_018df400 = 0x2cc;
  DAT_018df3fc = "NIST P-521";
  DAT_018df40d = 5;
  DAT_018df408 = 0x23;
  DAT_018df404 = 0x4812b;
  FUN_01714378(&DAT_018df358,&DAT_00444418,0x11);
  FUN_01714378(&DAT_018df344,&DAT_004442c4,0x11);
  DAT_018df36c = 1;
  DAT_018df370 = 0;
  FUN_01714378(&DAT_018df328,&DAT_004443d4,0x11);
  FUN_01714378(&DAT_018df314,&DAT_00444280,0x11);
  DAT_018df33c = 0x79a995c7;
  DAT_018df340 = 0x1d2f5ccd;
  DAT_018df240 = FUN_01732da4();
  FUN_016dd1aa(&DAT_018df248,&DAT_0044434c,0x44);
  FUN_016dd1aa(&DAT_018df28c,&DAT_00444308,0x44);
  DAT_018df2d0 = 1;
  FUN_016dd1aa(&DAT_018df3b8,&DAT_00444390,0x44);
  DAT_018df244 = &DAT_018df240;
  uVar1 = FUN_0172e71c(&DAT_018df240);
  DAT_018df410 = 1;
  FUN_0172f6a4(&DAT_018df240,&DAT_018df374,uVar1);
  FUN_0172ece8(&DAT_018df240,&DAT_018df374,&DAT_018df374,uVar1);
  FUN_0172ece8(&DAT_018df240,&DAT_018df374,&DAT_018df374,uVar1);
  DAT_018df414 = 1;
  DAT_018df418 = 1;
  DAT_018df41c = 4;
  DAT_018df420 = 0;
  return 0;
}

