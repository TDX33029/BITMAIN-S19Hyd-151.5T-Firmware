// FUN_0134392c @ 0134392c size=112 calls_out=1 calls_in=3
// strings: 

void FUN_0134392c(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  puVar2 = (undefined4 *)param_2[2];
  cVar1 = *(char *)(puVar2 + 6);
  if (cVar1 != '\x04') {
    iVar3 = puVar2[2];
    uVar7 = *param_2;
    uVar8 = param_2[1];
    *(undefined1 *)((int)param_1 + 0x13) = *(undefined1 *)((int)puVar2 + 0x1b);
    iVar5 = iVar3 + 3;
    uVar4 = *puVar2;
    if (iVar3 == 0) {
      iVar5 = 2;
    }
    iVar3 = puVar2[4];
    iVar6 = puVar2[5];
    *(undefined2 *)((int)param_1 + 0x11) = *(undefined2 *)((int)puVar2 + 0x19);
    uVar9 = FUN_013437d0(uVar7,uVar8,iVar5,uVar4);
    *param_1 = uVar9;
    *(int *)(param_1 + 1) = iVar3 - iVar5;
    *(int *)((int)param_1 + 0xc) = iVar6 - iVar5;
  }
  *(char *)(param_1 + 2) = cVar1;
  return;
}

