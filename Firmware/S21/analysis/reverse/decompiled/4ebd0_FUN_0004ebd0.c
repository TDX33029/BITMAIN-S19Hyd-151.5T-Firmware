// FUN_0004ebd0 @ 0004ebd0  size=864
// callers: [FUN_00055518]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0004ebd0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar6;
  undefined4 *puVar5;
  uint uVar7;
  void *__src;
  char cVar8;
  int iVar9;
  uint in_fpscr;
  uint uVar10;
  undefined4 uVar11;
  char local_2028 [4];
  char acStack_2024 [4];
  char acStack_2020 [4];
  char acStack_201c [4];
  char acStack_2018 [4];
  undefined2 uStack_2014;
  undefined1 local_2012;
  
  if (4 < DAT_000be63c) {
    if (param_1 < 100) {
      param_1 = 100;
    }
    uVar7 = 3000;
    if (param_1 < 3000) {
      uVar7 = param_1;
    }
    snprintf(local_2028,0x2000,"inc freq delay:%d",uVar7);
    FUN_0004948c(4,local_2028,0);
  }
  if (DAT_000be8e8 == 2) {
    cVar8 = '\0';
    iVar9 = 0;
    __src = DAT_0004ef30;
    do {
      iVar3 = FUN_0002a6f0(iVar9);
      if (iVar3 != 0) {
        cVar1 = *(char *)((int)__src + 0x400);
        if (cVar1 == '\0') {
          iVar3 = FUN_0002a514();
          if (0 < iVar3) {
            uVar11 = *(undefined4 *)(DAT_0004ef34 + iVar9 * 4);
            puVar5 = &DAT_00943ae0 + iVar9 * 0x100;
            do {
              puVar6 = puVar5 + 1;
              *puVar5 = uVar11;
              puVar5 = puVar6;
            } while (puVar6 != &DAT_00943ae0 + iVar3 + iVar9 * 0x100);
          }
        }
        else {
          memcpy(&DAT_00943ae0 + iVar9 * 0x100,__src,0x400);
          cVar8 = cVar1;
        }
      }
      iVar9 = iVar9 + 1;
      __src = (void *)((int)__src + 0x40c);
    } while (iVar9 != 4);
    iVar9 = 0;
    do {
      iVar4 = FUN_0002a6f0(iVar9);
      iVar3 = DAT_008c7040;
      if ((iVar4 != 0) && (DAT_008c7054 != (&DAT_008c7054)[iVar9])) {
        cVar8 = '\x01';
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 4);
    uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_000be614 < 0.0) << 0x1f |
            (uint)(DAT_000be614 == 0.0) << 0x1e;
    in_fpscr = uVar7 | (uint)NAN(DAT_000be614) << 0x1c;
    bVar2 = (byte)(uVar7 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      if (cVar8 == '\0') {
        iVar9 = DAT_008c7040 - DAT_000be8ec;
        if (iVar9 < 0xc9) {
          uVar11 = FUN_00024c74();
          iVar9 = 0;
          if (iVar3 == 0x32) {
            do {
              iVar3 = FUN_0002a6f0(iVar9);
              if (iVar3 != 0) {
                FUN_00026f74(iVar9,DAT_008c7044,0x32);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != 4);
            goto LAB_0004ec20;
          }
          iVar4 = DAT_008c706c + DAT_008c7070;
          if (0x883 < iVar4) {
            iVar4 = 0x884;
          }
        }
        else {
          uVar11 = FUN_00024c74();
          iVar4 = DAT_008c706c + DAT_008c7070;
          iVar3 = iVar9;
          if (0x883 < iVar4) {
            iVar4 = 0x884;
          }
        }
        FUN_00027460(0x32,iVar3,uVar11,iVar4,0);
      }
      else {
        if (3 < DAT_000be63c) {
          local_2028[0] = s_enter_mixed_freq_mode_000a48fc[0];
          local_2028[1] = s_enter_mixed_freq_mode_000a48fc[1];
          local_2028[2] = s_enter_mixed_freq_mode_000a48fc[2];
          local_2028[3] = s_enter_mixed_freq_mode_000a48fc[3];
          acStack_2024[0] = s_enter_mixed_freq_mode_000a48fc[4];
          acStack_2024[1] = s_enter_mixed_freq_mode_000a48fc[5];
          acStack_2024[2] = s_enter_mixed_freq_mode_000a48fc[6];
          acStack_2024[3] = s_enter_mixed_freq_mode_000a48fc[7];
          acStack_2020[0] = s_enter_mixed_freq_mode_000a48fc[8];
          acStack_2020[1] = s_enter_mixed_freq_mode_000a48fc[9];
          acStack_2020[2] = s_enter_mixed_freq_mode_000a48fc[10];
          acStack_2020[3] = s_enter_mixed_freq_mode_000a48fc[0xb];
          acStack_201c[0] = s_enter_mixed_freq_mode_000a48fc[0xc];
          acStack_201c[1] = s_enter_mixed_freq_mode_000a48fc[0xd];
          acStack_201c[2] = s_enter_mixed_freq_mode_000a48fc[0xe];
          acStack_201c[3] = s_enter_mixed_freq_mode_000a48fc[0xf];
          acStack_2018[0] = s_enter_mixed_freq_mode_000a48fc[0x10];
          acStack_2018[1] = s_enter_mixed_freq_mode_000a48fc[0x11];
          acStack_2018[2] = s_enter_mixed_freq_mode_000a48fc[0x12];
          acStack_2018[3] = s_enter_mixed_freq_mode_000a48fc[0x13];
          uStack_2014 = (undefined2)ram0x000a4910;
          local_2012 = (undefined1)((uint)ram0x000a4910 >> 0x10);
          FUN_0004948c(3,local_2028,0);
        }
        DAT_00aaa8f0 = 0xffffffff;
        DAT_00aaa8f4 = 0xffffffff;
        DAT_00aaa8f8 = 0xffffffff;
        DAT_00aaa8fc = 0xffffffff;
        DAT_00a6c8e8 = 0;
        DAT_00a6c8ec = 0;
        DAT_00a6c8f0 = 0;
        DAT_00a6c8f4 = 0;
        DAT_00a6c8d8 = 0;
        DAT_00a6c8dc = 0;
        DAT_00a6c8e0 = 0;
        DAT_00a6c8e4 = 0;
        FUN_00025b38(&DAT_00943ae0,&DAT_00aaa8f0,&DAT_00a6c8e8,&DAT_00a6c8d8,&DAT_008c8aa8,
                     DAT_0004ef38 + 4,DAT_0004ef38);
        FUN_000282a4(&DAT_00a6c8d8,param_2,param_3);
      }
    }
  }
LAB_0004ec20:
  uVar7 = in_fpscr & 0xfffffff | (uint)(DAT_000be614 < 0.0) << 0x1f |
          (uint)(DAT_000be614 == 0.0) << 0x1e;
  uVar10 = uVar7 | (uint)NAN(DAT_000be614) << 0x1c;
  bVar2 = (byte)(uVar7 >> 0x18);
  DAT_000c045c = 1;
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar10 >> 0x1c) & 1)) {
    DAT_008c7040 = FUN_00026ce8(DAT_000be8f0,&DAT_00943ae0,DAT_008c7044);
    uVar11 = VectorUnsignedToFloat(DAT_008c7040,(byte)(uVar10 >> 0x16) & 3);
    return uVar11;
  }
  uVar11 = VectorUnsignedToFloat(DAT_008c7040,(byte)(uVar10 >> 0x16) & 3);
  return uVar11;
}


