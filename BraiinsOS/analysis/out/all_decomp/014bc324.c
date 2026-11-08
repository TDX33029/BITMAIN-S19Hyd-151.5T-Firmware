// FUN_014bc324 @ 014bc324 size=328 calls_out=3 calls_in=0
// strings: 

void FUN_014bc324(uint *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint local_38;
  uint local_34;
  char local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  uint local_28;
  
  piVar5 = (int *)*param_2;
  uVar6 = param_2[1];
  if (*piVar5 == 2) {
    FUN_01642dd8(&local_38,piVar5 + 1,uVar6,param_3,param_4);
    if ((char)local_38 == '\x05') {
LAB_014bc36c:
      *(undefined2 *)param_1 = 0xd01;
      return;
    }
  }
  else {
    iVar3 = param_4 << 3;
    iVar4 = param_3;
    do {
      if (iVar3 == 0) {
        local_34 = 0;
        goto LAB_014bc434;
      }
      piVar1 = (int *)(iVar4 + 4);
      iVar3 = iVar3 + -8;
      iVar4 = iVar4 + 8;
    } while (*piVar1 == 0);
    do {
      FUN_014dfd80(&local_2c,piVar5 + 4,param_3,param_4);
      uVar2 = local_28;
      if (local_2c != '\x04') {
        local_38 = (uint)CONCAT12(local_29,local_2b) << 8;
        local_34 = local_28;
        goto LAB_014bc438;
      }
LAB_014bc3cc:
      if (piVar5[0x86] != 0) {
        FUN_014bd878(&local_38,piVar5,piVar5 + 4,uVar6);
        if ((local_38 & 0xff) == 4) goto code_r0x014bc3f8;
        if ((local_38 & 0xff) == 5) goto LAB_014bc428;
        goto LAB_014bc43c;
      }
    } while (uVar2 == 0);
LAB_014bc430:
    local_34 = uVar2;
LAB_014bc434:
    local_2c = '\x04';
LAB_014bc438:
    local_38 = CONCAT31(local_38._1_3_,local_2c);
  }
LAB_014bc43c:
  *param_1 = local_38;
  param_1[1] = local_34;
  return;
code_r0x014bc3f8:
  if (local_34 == 0) {
LAB_014bc428:
    if (uVar2 == 0) goto LAB_014bc36c;
    goto LAB_014bc430;
  }
  goto LAB_014bc3cc;
}

