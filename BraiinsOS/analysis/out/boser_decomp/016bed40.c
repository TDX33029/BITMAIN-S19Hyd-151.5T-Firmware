// FUN_016bed40 @ 016bed40 size=84 calls_out=1 calls_in=2
// strings: 

void FUN_016bed40(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  puVar3 = (undefined4 *)
           (**(code **)(param_3 + 0x10))(param_2 + (*(int *)(param_3 + 8) - 1U & 0xfffffff8) + 8);
  piVar5 = (int *)*puVar3;
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x16bed90);
    (*pcVar1)();
  }
  FUN_016cb120(param_1);
  return;
}

