// FUN_01b8b308 @ 01b8b308 size=1220 calls_out=8 calls_in=1
// strings: 

void FUN_01b8b308(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 *param_6,int param_7,undefined4 param_8,uint param_9,uint param_10,
                 undefined4 param_11)

{
  uint extraout_r1;
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  undefined1 auStack_dc [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_58;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_6 == (undefined4 *)0x0) {
    uVar6 = param_3;
LAB_01b8b704:
    lVar10 = FUN_01b89888(param_1,param_7,param_9,param_10,uVar6,0,param_11);
    if (0xffffff88 < (uint)lVar10) goto LAB_01b8b558;
    if (param_6 != (undefined4 *)0x0) {
      param_4 = param_6[2];
      param_3 = param_6[1];
      param_2 = *param_6;
    }
    lVar10 = FUN_01b8b1dc(*(undefined4 *)(param_1 + 0x860),param_1 + 0x868,param_1 + 800,
                          param_1 + 0x224,param_1 + 0xbc,param_2,param_3,param_4,param_5,0,
                          *(undefined4 *)(param_1 + 0x948));
    uVar2 = (uint)((ulonglong)lVar10 >> 0x20);
    if (0xffffff88 < (uint)lVar10) goto LAB_01b8b558;
    *(uint *)(param_1 + 0x21c) = (uint)lVar10;
    *(uint *)(param_1 + 0x220) = uVar6;
  }
  else {
    uVar6 = param_6[1];
    if ((uVar6 == 0) ||
       (((!CARRY4(param_10 - (param_9 < 0x20000),(uint)(0xfffdfffe < param_9 - 0x20000)) &&
         (uVar2 = (uint)((ulonglong)uVar6 * 6 >> 0x20),
         uVar2 < param_10 || param_10 - uVar2 < (uint)((uint)((ulonglong)uVar6 * 6) <= param_9))) &&
        (param_6[0x4c9] != 0)))) goto LAB_01b8b704;
    iVar4 = *(int *)(param_7 + 0x3c);
    if (iVar4 == 3) goto LAB_01b8b704;
    iVar7 = param_6[0x2b];
    iVar8 = param_6[0x44];
    if (iVar7 == 0) {
      if (param_10 == 0xffffffff && param_9 == 0xffffffff ||
          -param_10 < (uint)(param_9 <= *(uint *)(&DAT_005627ec + iVar8 * 4))) {
        if (iVar4 != 2) goto LAB_01b8b404;
      }
      else if (iVar4 == 1) {
LAB_01b8b404:
        if (*(int *)(param_7 + 0x30) == 0) goto LAB_01b8b410;
      }
      FUN_01bed4e2(auStack_dc,param_7,0xb0);
      local_d8 = *(undefined4 *)(param_7 + 4);
      uStack_d4 = param_6[0x3f];
      uStack_d0 = param_6[0x40];
      uStack_cc = param_6[0x41];
      local_c8 = param_6[0x42];
      uStack_c4 = param_6[0x43];
      uStack_c0 = param_6[0x44];
      local_58 = param_6[0x4ca];
      lVar10 = FUN_01b89888(param_1,auStack_dc,param_9,param_10,0,1,param_11);
      if (0xffffff88 < (uint)lVar10) goto LAB_01b8b558;
      *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x22c);
      iVar4 = FUN_01b85214(param_6[0x44],param_6[0x4ca],0);
      uVar6 = 0;
      if (iVar4 != 0) {
        uVar6 = param_6[0x3f];
      }
      iVar7 = 1 << (param_6[0x40] & 0xff);
      if (iVar4 != 0) {
        uVar6 = 1 << (uVar6 & 0xff);
      }
      FUN_01b8662c(*(undefined4 *)(param_1 + 0x8c4),param_6[0x27],iVar7);
      iVar4 = FUN_01b85214(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0x140),0);
      if (iVar4 != 0) {
        FUN_01b8662c(*(undefined4 *)(param_1 + 0x8cc),param_6[0x29],uVar6,param_6[0x44]);
      }
      bVar9 = param_6[0x44] - 3 == 2;
      if (param_6[0x44] - 3 < 3) {
        bVar9 = param_6[0x4ca] == 1;
      }
      if (bVar9) {
        FUN_01bed4e2(*(undefined4 *)(param_1 + 0x890),param_6[0x1a],iVar7);
        uVar1 = param_6[0x25];
        *(undefined4 *)(param_1 + 0x8b8) = param_6[0x24];
        *(undefined4 *)(param_1 + 0x8bc) = uVar1;
      }
      iVar4 = 0;
      if (*(uint *)(param_1 + 0x888) != 0) {
        iVar4 = 1 << (*(uint *)(param_1 + 0x888) & 0xff);
      }
      FUN_01bed93e(*(undefined4 *)(param_1 + 0x8c8),0,iVar4 << 2);
      if (*(uint *)(param_1 + 0x234) < *(uint *)(param_1 + 0x230)) {
        *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x230);
      }
      uVar1 = param_6[0x11];
      uVar3 = param_6[0x12];
      uVar5 = param_6[0x13];
      *(undefined4 *)(param_1 + 0x868) = param_6[0x10];
      *(undefined4 *)(param_1 + 0x86c) = uVar1;
      *(undefined4 *)(param_1 + 0x870) = uVar3;
      *(undefined4 *)(param_1 + 0x874) = uVar5;
      uVar3 = param_6[0x17];
      uVar1 = param_6[0x15];
      *(undefined4 *)(param_1 + 0x878) = param_6[0x14];
      *(undefined4 *)(param_1 + 0x87c) = uVar1;
      *(undefined4 *)(param_1 + 0x884) = uVar3;
      *(undefined4 *)(param_1 + 0x880) = param_6[0x16];
    }
    else {
LAB_01b8b410:
      FUN_01bed4e2(auStack_dc,param_7,0xb0);
      local_d8 = *(undefined4 *)(param_7 + 4);
      uVar2 = param_6[0x40];
      if (((iVar7 != 0) && (iVar8 - 3U < 3)) && (uVar2 = uVar2 - 2, uVar2 < 6)) {
        uVar2 = 6;
      }
      FUN_01b86b50(&local_d8,param_6[0x3e],param_6[0x3f],uVar2,param_6[0x41],param_6[0x42],
                   param_6[0x43],param_6[0x44],param_9,param_10,uVar6,1,
                   *(undefined4 *)(param_7 + 0x84));
      local_58 = param_6[0x4ca];
      lVar10 = FUN_01b89888(param_1,auStack_dc,param_9,param_10,0,0,param_11);
      if (0xffffff88 < (uint)lVar10) goto LAB_01b8b558;
      uVar6 = param_6[0x10] - param_6[0x11];
      if (uVar6 != param_6[0x13]) {
        *(undefined4 **)(param_1 + 0x91c) = param_6 + 0x10;
        uVar2 = *(uint *)(param_1 + 0x874);
        if (*(uint *)(param_1 + 0x874) < uVar6) {
          *(uint *)(param_1 + 0x878) = uVar6;
          *(uint *)(param_1 + 0x868) = *(int *)(param_1 + 0x86c) + uVar6;
          *(uint *)(param_1 + 0x874) = uVar6;
          uVar2 = uVar6;
        }
        *(uint *)(param_1 + 0x880) = uVar2;
      }
    }
    *(undefined4 *)(param_1 + 0x21c) = param_6[0x4c8];
    *(undefined4 *)(param_1 + 0x220) = param_6[1];
    FUN_01bed4e2(*(undefined4 *)(param_1 + 0x860),param_6 + 0x48,0x11f4);
    uVar2 = extraout_r1;
  }
  lVar10 = (ulonglong)uVar2 << 0x20;
LAB_01b8b558:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4((int)lVar10,(int)((ulonglong)lVar10 >> 0x20),local_2c ^ DAT_01d53560,0);
  }
  return;
}

