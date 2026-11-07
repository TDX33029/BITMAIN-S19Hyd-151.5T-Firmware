// FUN_01315514 @ 01315514 size=568 calls_out=9 calls_in=0
// strings: must not be called with Writer or Vec

void FUN_01315514(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int **local_58;
  undefined4 local_54;
  int local_44;
  int *local_40;
  int *local_3c;
  undefined4 **local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int *local_28;
  undefined4 local_24;
  
  uVar8 = *(uint *)(param_2 + 0x3c);
  if (*(uint *)(param_2 + 0x38) < uVar8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar8,*(uint *)(param_2 + 0x38),&DAT_01890988);
  }
  iVar5 = *(int *)(param_2 + 0x34);
  iVar6 = uVar8 * 0x1c;
  do {
    if (iVar6 == 0) {
      piVar3 = (int *)FUN_012fa894(param_2);
      if ((int)piVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,piVar3);
      }
      if (piVar3 == (int *)0x0) {
        iVar6 = 1;
        piVar9 = (int *)0x0;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(piVar3);
        piVar9 = piVar3;
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,piVar3);
        }
      }
      local_3c = (int *)0x0;
      local_58 = (undefined4 **)0x80000001;
      local_44 = iVar6;
      local_40 = piVar3;
      FUN_012fb034(&local_38,param_2,&local_58);
      if (local_38 == (undefined4 **)0x4) {
        if (local_58 < (undefined4 **)0x80000001) {
                    /* WARNING: Subroutine does not return */
          FUN_015be724("must not be called with Writer or Vec",0x25,&DAT_0188fac0);
        }
        local_24 = 0;
        local_28 = local_40;
        local_34 = 0;
        local_38 = (undefined4 **)local_3c;
        if (local_40 != local_3c) {
          FUN_00faf26c(&local_28,&local_38,&DAT_0188fad0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xfdee,0x131574c);
          (*pcVar2)();
        }
        *param_1 = 0;
        param_1[1] = piVar9;
        param_1[2] = iVar6;
        param_1[3] = piVar3;
      }
      else {
        *param_1 = 1;
        param_1[1] = local_38;
        param_1[2] = local_34;
        param_1[3] = uStack_30;
        if (0 < (int)local_58) {
          thunk_FUN_016d3fb4(local_54);
        }
        if (piVar9 != (int *)0x0) {
          thunk_FUN_016d3fb4(iVar6);
          return;
        }
      }
      return;
    }
    if (*(char *)(iVar5 + 0xc) != '\x01') break;
    pcVar1 = (char *)(iVar5 + 0x18);
    iVar6 = iVar6 + -0x1c;
    iVar5 = iVar5 + 0x1c;
  } while (*pcVar1 != '\x02');
  local_28 = &DAT_018d88bc;
  DataMemoryBarrier(0xb);
  if (DAT_018d88bc != 0) {
    local_38 = &local_28;
    local_58 = (int **)&local_38;
    FUN_015eedc4(&DAT_018d88bc,0,&local_58,&DAT_0188f0b4,&DAT_0188e9dc);
  }
  uVar7 = 1;
  iVar6 = *(int *)(DAT_018d88c0 + 0x68);
  uVar4 = 0;
  if (*(char *)(iVar6 + 0xc) == '\x01') {
    uVar4 = *(undefined4 *)(iVar6 + 8);
    uVar7 = *(undefined4 *)(iVar6 + 4);
  }
  *param_1 = 1;
  param_1[1] = 3;
  param_1[2] = uVar7;
  param_1[3] = uVar4;
  return;
}

