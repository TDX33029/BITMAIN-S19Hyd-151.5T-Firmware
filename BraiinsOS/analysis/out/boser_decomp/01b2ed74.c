// FUN_01b2ed74 @ 01b2ed74 size=152 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b2ed74(undefined2 *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar3 = 1;
  puVar4 = (undefined2 *)&UNK_0055e098;
  if (*(int *)(param_2 + 4) * 0x20 < 0x401) {
    iVar5 = 0x200;
  }
  else {
    iVar5 = 0x400;
  }
  do {
    puVar4 = puVar4 + 1;
    uVar1 = *puVar4;
    iVar2 = FUN_01b2ec50(param_2,uVar1);
    if (iVar2 == 0) {
      *param_1 = uVar1;
      return 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != iVar5);
  return 0;
}

