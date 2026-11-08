// FUN_006cb1e0 @ 006cb1e0 size=236 calls_out=3 calls_in=0
// strings: 

void FUN_006cb1e0(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  iVar1 = FUN_016343a0(param_1,param_1 + 0x48,*param_3,param_3[1]);
  if (iVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x28) = 2;
    if (iVar4 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00413073,0x45,&DAT_018ac3a0);
    }
    iVar4 = *(int *)(param_1 + 0x30);
    iVar2 = *(int *)(param_1 + 0x34);
    iVar5 = *(int *)(param_1 + 0x38);
    iVar6 = *(int *)(param_1 + 0x3c);
    if (*param_2 == 0 && param_2[1] == 0) {
      bVar8 = param_2[2] == 0 && param_2[3] == 0;
      if (param_2[2] != 0 || param_2[3] != 0) {
        iVar1 = param_2[4];
        bVar8 = iVar1 == 0;
      }
      if (!bVar8) {
        puVar7 = (undefined4 *)param_2[5];
        pcVar3 = (code *)*puVar7;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(iVar1);
        }
        if (puVar7[1] != 0) {
          thunk_FUN_016d3fb4(iVar1);
        }
      }
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = iVar4;
    param_2[3] = iVar2;
    param_2[4] = iVar5;
    param_2[5] = iVar6;
  }
  return;
}

