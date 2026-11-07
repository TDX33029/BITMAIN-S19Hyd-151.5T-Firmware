// FUN_0174aa6c @ 0174aa6c size=1240 calls_out=17 calls_in=2
// strings: 

undefined8 FUN_0174aa6c(undefined4 param_1,int param_2,uint param_3,uint *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  int local_118;
  int local_114;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [48];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  iVar2 = FUN_01782028();
  if (iVar2 == 0) {
    iVar2 = FUN_0177a9c0(0x160);
    if ((iVar2 == 0) || (iVar3 = FUN_017820bc(param_1,iVar2,FUN_0170797c), iVar3 != 1))
    goto LAB_0174ade8;
    iVar3 = FUN_0174a928();
    *(int *)(iVar2 + 0x130) = iVar3;
    if (iVar3 == 0) goto LAB_0174ade8;
    iVar7 = (**(code **)(*(int *)(iVar3 + 4) + 0xc))(iVar3,auStack_ec);
    if (iVar7 != 1) goto LAB_0174ade8;
    pcVar9 = *(code **)(*(int *)(iVar3 + 4) + 0x10);
    if (pcVar9 == (code *)0x0) {
      uVar10 = 0;
    }
    else {
      iVar3 = (*pcVar9)(iVar3,auStack_bc);
      if (iVar3 != 1) goto LAB_0174ade8;
      uVar10 = 0x30;
    }
    iVar3 = FUN_01749140(iVar2,auStack_ec,auStack_bc,uVar10);
    if (iVar3 == 0) goto LAB_0174ade8;
    *(undefined4 *)(iVar2 + 0x120) = 0;
    bVar1 = false;
    *(undefined4 *)(iVar2 + 0x118) = 0;
    *(undefined4 *)(iVar2 + 0x124) = 0;
    *(undefined4 *)(iVar2 + 0x11c) = 0;
    local_118 = 0;
    local_114 = 0;
    iVar4 = FUN_017826a8(&local_118);
    iVar7 = 0;
    iVar3 = 0;
    if (iVar4 == 1) {
      iVar7 = local_114;
      iVar3 = local_118;
    }
    *(int *)(iVar2 + 300) = iVar7;
    *(int *)(iVar2 + 0x128) = iVar3;
    FUN_01781e28(iVar2 + 0x13c);
    FUN_0177aaa0(auStack_ec,0x30);
    FUN_0177aaa0(auStack_bc,0x30);
    *(undefined4 *)(iVar2 + 0x138) = 0;
    FUN_01781f64(&DAT_018de72c);
    *(int *)(iVar2 + 0x134) = DAT_018de74c;
    if (DAT_018de74c != 0) {
      *(int *)(DAT_018de74c + 0x138) = iVar2;
    }
    DAT_018de74c = iVar2;
    FUN_01781fc4(&DAT_018de72c);
  }
  else {
    bVar1 = true;
  }
  if (param_2 == 0) goto LAB_0174ade8;
  local_118 = 0;
  local_114 = 0;
  iVar3 = FUN_017826a8();
  if (iVar3 == 1) {
    if (*(int *)(iVar2 + 300) == local_114 && *(int *)(iVar2 + 0x128) == local_118) {
      bVar1 = false;
    }
    else {
      *(int *)(iVar2 + 0x128) = local_118;
      *(int *)(iVar2 + 300) = local_114;
    }
  }
  FUN_016dd606(&local_10c,0,0x20);
  iVar3 = *(int *)(iVar2 + 0x130);
  if (iVar3 == 0) goto LAB_0174ade8;
  pcVar9 = *(code **)(*(int *)(iVar3 + 4) + 0x14);
  if (pcVar9 == (code *)0x0) {
    uVar10 = 0;
    if (param_5 == 1) {
LAB_0174ad50:
      local_10c = *param_4 ^ local_10c;
      local_108 = param_4[1] ^ local_108;
      local_104 = param_4[2] ^ local_104;
      local_100 = param_4[3] ^ local_100;
      local_fc = param_4[4] ^ local_fc;
      local_f8 = param_4[5] ^ local_f8;
      local_f4 = param_4[6] ^ local_f4;
      local_f0 = param_4[7] ^ local_f0;
      goto LAB_0174ab5c;
    }
  }
  else {
    iVar3 = (*pcVar9)(iVar3,&local_10c);
    if (iVar3 != 1) goto LAB_0174ade8;
    if (param_5 == 1) goto LAB_0174ad50;
LAB_0174ab5c:
    uVar10 = 0x20;
  }
  iVar3 = iVar2 + 0x13c;
  FUN_01781e60(iVar3);
  if (param_3 == 0) {
LAB_0174acc0:
    FUN_0177aaa0(&local_10c,0x20);
    local_118 = 0;
    local_114 = 0;
    iVar7 = FUN_017826a8(&local_118);
    if ((iVar7 != 1) || (*(int *)(iVar2 + 300) == local_114 && *(int *)(iVar2 + 0x128) == local_118)
       ) {
      FUN_01781ec0(iVar3);
      if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  }
  else {
    if (!bVar1) {
      iVar7 = *(int *)(iVar2 + 0x11c);
      goto LAB_0174ac98;
    }
    while( true ) {
      FUN_01781ec0(iVar3);
      iVar7 = *(int *)(iVar2 + 0x130);
      if ((iVar7 == 0) ||
         (iVar4 = (**(code **)(*(int *)(iVar7 + 4) + 0xc))(iVar7,auStack_8c), iVar4 != 1)) break;
      pcVar9 = *(code **)(*(int *)(iVar7 + 4) + 0x10);
      if (pcVar9 == (code *)0x0) {
        uVar8 = 0;
      }
      else {
        iVar7 = (*pcVar9)(iVar7,auStack_5c);
        if (iVar7 != 1) break;
        uVar8 = 0x30;
      }
      FUN_01781e60(iVar3);
      iVar7 = FUN_0174978c(iVar2,auStack_8c,auStack_5c,uVar8);
      if (iVar7 != 1) break;
      uVar5 = *(uint *)(iVar2 + 0x120);
      *(uint *)(iVar2 + 0x120) = uVar5 + 1;
      *(uint *)(iVar2 + 0x124) = *(int *)(iVar2 + 0x124) + (uint)(0xfffffffe < uVar5);
      *(undefined4 *)(iVar2 + 0x118) = 0;
      *(undefined4 *)(iVar2 + 0x11c) = 0;
      FUN_0177aaa0(auStack_8c,0x30);
      FUN_0177aaa0(auStack_5c,0x30);
      do {
        uVar5 = param_3;
        if (0xffff < param_3) {
          uVar5 = 0x10000;
        }
        iVar7 = FUN_01749e98(iVar2,param_2,uVar5,&local_10c,uVar10);
        if (iVar7 == 0) goto LAB_0174ade8;
        uVar6 = *(uint *)(iVar2 + 0x118);
        *(uint *)(iVar2 + 0x118) = uVar6 + 1;
        iVar7 = *(int *)(iVar2 + 0x11c) + (uint)(0xfffffffe < uVar6);
        param_3 = param_3 - uVar5;
        *(int *)(iVar2 + 0x11c) = iVar7;
        if (param_3 == 0) goto LAB_0174acc0;
        param_2 = param_2 + uVar5;
        uVar10 = 0;
LAB_0174ac98:
      } while (-(iVar7 + (uint)(0xfffffffe < *(uint *)(iVar2 + 0x118))) <
               (uint)(*(uint *)(iVar2 + 0x118) + 1 < 0x1001));
    }
  }
LAB_0174ade8:
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

