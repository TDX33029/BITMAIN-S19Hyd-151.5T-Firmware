// FUN_010398ac @ 010398ac size=796 calls_out=9 calls_in=3
// strings: 

int FUN_010398ac(short *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  ushort *puVar4;
  int iVar5;
  short *psVar6;
  undefined4 local_78;
  undefined2 local_74;
  undefined2 uStack_72;
  undefined2 local_70;
  undefined2 uStack_6e;
  short local_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_30 [4];
  
  psVar6 = param_1 + 0x12;
  if (*psVar6 == 1) {
    uVar3 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar3 = (uint)(ushort)param_1[0x13];
  }
  if (*param_1 == 1) {
    uVar3 = param_3 + uVar3 + *(int *)(param_1 + 6) + 2;
    if (0xff < uVar3) {
LAB_01039950:
      local_74 = (undefined2)uVar3;
      uStack_72 = (undefined2)(uVar3 >> 0x10);
      local_78._0_2_ = 8;
      iVar5 = thunk_FUN_016d4a50(0x44);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x44);
      }
      FUN_016dd1aa(iVar5,&local_78,0x44);
      return iVar5;
    }
    if (((uint)(*(int *)(param_1 + 2) - *(int *)(param_1 + 6)) < param_3) &&
       (FUN_0104e980(param_1 + 2,*(int *)(param_1 + 6),param_3,1,1), *param_1 == 0)) {
LAB_01039aa8:
      param_3 = param_3 + (ushort)param_1[1];
      local_30[0] = param_3;
      if (0x20 < param_3) {
        local_78 = local_30;
        local_6c = 0xc484;
        uStack_6a = 0xfa;
        local_74 = 0xc484;
        uStack_72 = 0xfa;
        local_70 = 0x7044;
        uStack_6e = 0x56;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0056e1c7,&local_78,&DAT_018832d8);
      }
      FUN_016dd1aa((int)param_1 + (ushort)param_1[1] + 4,param_2);
      param_1[1] = (short)param_3;
      uVar3 = (uint)(ushort)param_1[1];
      goto LAB_01039a40;
    }
LAB_01039a10:
    iVar5 = *(int *)(param_1 + 6);
    if ((uint)(*(int *)(param_1 + 2) - iVar5) < param_3) {
      FUN_0104e980(param_1 + 2,iVar5,param_3,1,1);
      iVar5 = *(int *)(param_1 + 6);
      sVar2 = *param_1;
      FUN_016dd1aa(*(int *)(param_1 + 4) + iVar5,param_2,param_3);
      *(uint *)(param_1 + 6) = iVar5 + param_3;
      if (sVar2 == 0) goto LAB_01039b3c;
    }
    else {
      FUN_016dd1aa(*(int *)(param_1 + 4) + iVar5,param_2);
      *(uint *)(param_1 + 6) = iVar5 + param_3;
    }
    uVar3 = *(uint *)(param_1 + 6);
  }
  else {
    uVar3 = param_3 + uVar3 + (uint)(ushort)param_1[1] + 2;
    if (0xff < uVar3) goto LAB_01039950;
    puVar4 = (ushort *)(param_1 + 1);
    if (0x20 - *puVar4 < param_3) {
      FUN_0104afe8(local_30,puVar4);
      uStack_72 = (undefined2)local_30[1];
      local_70 = (undefined2)(local_30[1] >> 0x10);
      uStack_6e = (undefined2)local_30[2];
      local_6c = (short)(local_30[2] >> 0x10);
      local_78._2_2_ = (undefined2)local_30[0];
      local_74 = (undefined2)(local_30[0] >> 0x10);
      if (*param_1 != 0 && *(int *)(param_1 + 2) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 4));
      }
      param_1[7] = local_6c;
      *(uint *)(param_1 + 3) = CONCAT22(uStack_72,local_74);
      *(uint *)(param_1 + 5) = CONCAT22(uStack_6e,local_70);
      *param_1 = 1;
      *(uint *)puVar4 = CONCAT22(local_78._2_2_,(undefined2)local_78);
      goto LAB_01039a10;
    }
    if (param_3 != 0) goto LAB_01039aa8;
LAB_01039b3c:
    uVar3 = (uint)(ushort)param_1[1];
  }
LAB_01039a40:
  if (*psVar6 == 1) {
    iVar5 = *(int *)(param_1 + 0x18);
    if (iVar5 == *(int *)(param_1 + 0x14)) {
      FUN_006029c0(param_1 + 0x14);
    }
    *(char *)(*(int *)(param_1 + 0x16) + iVar5) = (char)uVar3;
    *(int *)(param_1 + 0x18) = iVar5 + 1;
    return 0;
  }
  uVar1 = param_1[0x13];
  if (uVar1 < 0x18) {
    param_1[0x13] = uVar1 + 1;
    *(char *)((int)param_1 + uVar1 + 0x28) = (char)uVar3;
    return 0;
  }
  FUN_01040124(&local_78,param_1 + 0x13,uVar3);
  iVar5 = 0;
  if (param_1[0x12] != 0) {
    iVar5 = *(int *)(param_1 + 0x14);
  }
  if (param_1[0x12] != 0 && iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x16));
  }
  *(uint *)psVar6 = CONCAT22(local_78._2_2_,(undefined2)local_78);
  *(uint *)(param_1 + 0x14) = CONCAT22(uStack_72,local_74);
  *(uint *)(param_1 + 0x16) = CONCAT22(uStack_6e,local_70);
  *(uint *)(param_1 + 0x18) = CONCAT22(uStack_6a,local_6c);
  *(undefined4 *)(param_1 + 0x1a) = uStack_68;
  *(undefined4 *)(param_1 + 0x1c) = uStack_64;
  *(undefined4 *)(param_1 + 0x1e) = uStack_60;
  return 0;
}

