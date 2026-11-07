// FUN_0116c2ec @ 0116c2ec size=108 calls_out=1 calls_in=1
// strings: 

void FUN_0116c2ec(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  char local_15;
  undefined4 local_14;
  
  iVar1 = *param_2;
  uVar4 = 0;
  if (iVar1 != param_2[1]) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
    uVar3 = *(undefined4 *)(iVar1 + 8);
    *param_2 = iVar1 + 0xc;
    puVar5 = (undefined1 *)param_2[2];
    FUN_01304e7c(&local_15,uVar2,uVar3);
    if (local_15 == '\x01') {
      *puVar5 = 1;
    }
    else {
      uVar4 = 1;
      *(undefined4 *)(param_1 + 1) = local_14;
    }
  }
  *param_1 = uVar4;
  return;
}

