// FUN_0115f0a4 @ 0115f0a4 size=132 calls_out=1 calls_in=3
// strings: 

void FUN_0115f0a4(int param_1,int param_2)

{
  code *pcVar1;
  int extraout_r1;
  int extraout_r1_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_1 + 8);
    iVar2 = param_2;
    do {
      if (puVar3[-2] != 0) {
        param_2 = puVar3[-1];
      }
      if (puVar3[-2] != 0 && param_2 != 0) {
        thunk_FUN_016d3fb4();
        uVar4 = *puVar3;
        piVar5 = (int *)puVar3[1];
        pcVar1 = (code *)*piVar5;
        param_2 = 0;
        if (pcVar1 != (code *)0x0) goto LAB_0115f104;
      }
      else {
        uVar4 = *puVar3;
        piVar5 = (int *)puVar3[1];
        pcVar1 = (code *)*piVar5;
        if (pcVar1 == (code *)0x0) {
          param_2 = 0;
        }
        else {
LAB_0115f104:
          (*pcVar1)(uVar4);
          param_2 = extraout_r1;
        }
      }
      if (piVar5[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
        param_2 = extraout_r1_00;
      }
      puVar3 = puVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

