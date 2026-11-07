// FUN_01239010 @ 01239010 size=388 calls_out=4 calls_in=8
// strings: 

undefined8 FUN_01239010(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined8 uVar6;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  undefined1 *local_24;
  int **local_20;
  undefined4 *local_1c;
  
  uVar6 = CONCAT44(param_2,param_1);
  if (param_3 == (int *)0x0) {
    do {
      iVar3 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1239190);
      (*pcVar1)();
    }
  }
  else {
    iVar3 = *param_3;
    local_70 = *(int *)(iVar3 + 0xc);
    local_6c = *(uint *)(iVar3 + 0x18);
    if (*(uint *)(iVar3 + 0x20) != 0) {
      local_6c = *(uint *)(iVar3 + 0x20);
    }
    if (local_6c != 0) {
      uVar5 = *(uint *)(iVar3 + 0x10);
      if (local_6c < uVar5) {
        if (*(char *)(local_70 + local_6c) < -0x40) {
LAB_0123905c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(local_70,uVar5,0,local_6c,&DAT_01882194);
        }
      }
      else if (local_6c != uVar5) goto LAB_0123905c;
    }
    local_28 = &local_70;
    local_68 = *(undefined4 *)(iVar3 + 0x14);
    uStack_64 = *(undefined4 *)(iVar3 + 0x18);
    uStack_60 = *(undefined4 *)(iVar3 + 0x1c);
    local_5c = *(undefined4 *)(iVar3 + 0x20);
    uStack_58 = *(undefined4 *)(iVar3 + 0x24);
    uStack_54 = *(undefined4 *)(iVar3 + 0x28);
    uStack_50 = *(undefined4 *)(iVar3 + 0x2c);
    if (param_2 == 0) {
      piVar4 = &iStack_48;
      local_24 = &LAB_011e1bd8;
      FUN_00600d2c(piVar4,&DAT_00590bb5,&local_28);
      uVar6 = FUN_011e1508(local_44,local_40);
      local_38 = local_44;
    }
    else {
      local_30 = param_1 + 2;
      piVar4 = &local_3c;
      local_20 = &local_30;
      local_24 = &LAB_011e1bd8;
      local_1c = &DAT_0157d360;
      local_2c = param_2;
      FUN_00600d2c(piVar4,&DAT_0058f60e,&local_28);
      uVar6 = FUN_011e1508(local_38,local_34);
    }
    if (*piVar4 != 0) {
      thunk_FUN_016d3fb4(local_38);
      return uVar6;
    }
  }
  return uVar6;
}

