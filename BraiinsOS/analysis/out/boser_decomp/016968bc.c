// FUN_016968bc @ 016968bc size=84 calls_out=1 calls_in=0
// strings: 

void FUN_016968bc(int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 400);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x169690c);
    (*pcVar1)();
  }
  FUN_016cb120(param_1);
  *(undefined4 *)(param_1 + 0x2d4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x268) = 0x80000000;
  *(undefined4 *)(param_1 + 600) = 0x80000000;
  *(undefined4 *)(param_1 + 0x248) = 2;
  *(undefined4 *)(param_1 + 200) = 2;
  return;
}

