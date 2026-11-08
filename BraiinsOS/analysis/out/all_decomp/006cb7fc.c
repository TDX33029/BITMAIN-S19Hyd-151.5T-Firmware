// FUN_006cb7fc @ 006cb7fc size=252 calls_out=5 calls_in=0
// strings: 

void FUN_006cb7fc(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_1f0 [116];
  
  iVar1 = FUN_016343a0(param_1,param_1 + 0x1f8,*param_3,param_3[1]);
  if (iVar1 != 0) {
    FUN_016dd1aa(local_1f0,param_1 + 0x28,0x1d0);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (local_1f0[0] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00413073,0x45,&DAT_018ac3a0);
    }
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x34);
    iVar4 = *(int *)(param_1 + 0x38);
    iVar5 = *(int *)(param_1 + 0x3c);
    if (*param_2 == 0 && param_2[1] == 0) {
      iVar7 = param_2[4];
      if (param_2[2] == 0 && param_2[3] == 0) {
        if (iVar7 != 0) {
          FUN_006495dc();
        }
      }
      else if (iVar7 != 0) {
        puVar6 = (undefined4 *)param_2[5];
        pcVar3 = (code *)*puVar6;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar7);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_016d3fb4(iVar7);
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = iVar1;
    param_2[3] = iVar2;
    param_2[4] = iVar4;
    param_2[5] = iVar5;
  }
  return;
}

