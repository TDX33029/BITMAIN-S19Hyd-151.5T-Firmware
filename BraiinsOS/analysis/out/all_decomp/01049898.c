// FUN_01049898 @ 01049898 size=680 calls_out=6 calls_in=0
// strings: 

int FUN_01049898(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  uint local_134;
  undefined4 local_130;
  undefined4 local_12c;
  char local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined *local_11c;
  undefined4 local_104;
  undefined4 local_100;
  undefined *local_fc;
  undefined4 local_c8;
  undefined *local_c4;
  undefined4 local_94;
  undefined *local_90;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_74;
  undefined *local_70;
  undefined *local_64;
  undefined *local_60;
  undefined *local_5c;
  undefined4 local_58;
  undefined *local_54;
  
  psVar4 = (short *)*param_1;
  sVar1 = *psVar4;
  if (sVar1 == 0) {
    uVar9 = (uint)(ushort)psVar4[1];
    if (0x18 < uVar9) goto LAB_01049b28;
    if ((3 < uVar9) && (piVar8 = (int *)(psVar4 + 2), *piVar8 == 0x2d2d6e78)) goto LAB_01049908;
LAB_01049aa0:
    piVar8 = (int *)(psVar4 + 2);
LAB_01049aa4:
    piVar5 = (int *)((int)piVar8 + uVar9);
    if (uVar9 == 0) goto LAB_01049ad8;
  }
  else {
    piVar8 = *(int **)(psVar4 + 4);
    uVar9 = *(uint *)(psVar4 + 6);
    if (uVar9 < 4) goto LAB_01049aa4;
    if (*piVar8 == 0x2d2d6e78) {
LAB_01049908:
      FUN_006008c8(&local_140,piVar8,uVar9);
      local_90 = &DAT_0188a9ac;
      local_60 = &DAT_0188aa18;
      local_5c = &DAT_0188aa48;
      local_76 = 0x41;
      local_78 = 0x41;
      local_70 = &DAT_0188a9dc;
      local_54 = &DAT_0188a948;
      local_58 = 0;
      local_64 = &DAT_0188a9e8;
      local_74 = 0;
      local_94 = 0;
      local_c4 = &DAT_0188a948;
      local_c8 = 0;
      local_fc = &DAT_0188a978;
      local_100 = 0;
      local_104 = 1;
      local_11c = &DAT_0188a9c4;
      local_120 = 0;
      local_124 = 1;
      FUN_010d46d8(&local_134,&local_124,local_13c,local_138);
      FUN_01049d28(&local_124);
      if (local_128 == '\0') {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,local_130,local_12c);
        if ((local_134 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_130);
        }
        if ((local_140 & 0x7fffffff) == 0) {
          return iVar2;
        }
        thunk_FUN_016d3fb4(local_13c);
        return iVar2;
      }
      if ((local_134 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_130);
      }
      if ((local_140 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_13c);
      }
      if (sVar1 == 0) {
        uVar9 = (uint)(ushort)psVar4[1];
        if (0x18 < uVar9) {
LAB_01049b28:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,uVar9,0x18,&DAT_01883538);
        }
        goto LAB_01049aa0;
      }
      piVar8 = *(int **)(psVar4 + 4);
      uVar9 = *(uint *)(psVar4 + 6);
      goto LAB_01049aa4;
    }
    piVar5 = (int *)((int)piVar8 + uVar9);
  }
  iVar2 = FUN_01049bb4((char)*piVar8,*param_2,param_2[1],1);
  piVar8 = (int *)((int)piVar8 + 1);
  if (iVar2 != 0) {
    return 1;
  }
LAB_01049ad8:
  if (piVar8 == piVar5) {
    return 0;
  }
  uVar3 = *param_2;
  uVar7 = param_2[1];
  do {
    piVar6 = (int *)((int)piVar8 + 1);
    iVar2 = FUN_01049bb4((char)*piVar8,uVar3,uVar7,0);
    if (iVar2 != 0) {
      return iVar2;
    }
    piVar8 = piVar6;
  } while (piVar6 != piVar5);
  return 0;
}

