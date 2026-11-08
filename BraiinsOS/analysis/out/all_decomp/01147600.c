// FUN_01147600 @ 01147600 size=336 calls_out=3 calls_in=3
// strings: 

void FUN_01147600(undefined4 *param_1,int *param_2,byte param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_24;
  undefined2 local_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 local_1a;
  
  if (*(char *)((int)param_2 + 7) == '\0') {
    FUN_01153164(&local_24,*param_2);
    if (local_24 == 2) {
      *param_1 = 5;
      param_1[1] = param_2;
      return;
    }
    *(undefined2 *)((int)param_1 + 0xe) = local_1a;
    *(uint *)((int)param_1 + 10) = CONCAT22(uStack_1c,uStack_1e);
    *(undefined2 *)(param_1 + 2) = local_20;
    *param_1 = 0;
    param_1[1] = local_24;
    return;
  }
  piVar2 = (int *)*param_2;
  iVar3 = *piVar2;
  iVar1 = piVar2[2];
  if (iVar3 == iVar1) {
    iVar3 = 8;
    if (8 < (uint)(iVar1 * 2)) {
      iVar3 = iVar1 << 1;
    }
    FUN_01150958(&local_24,iVar1,piVar2[1],iVar3,1,1);
    if (local_24 != 0) {
      *(undefined2 *)((int)param_1 + 0xe) = 0;
      *(undefined4 *)((int)param_1 + 10) = 0;
      *(undefined2 *)(param_1 + 2) = 0x2601;
      *param_1 = 0;
      param_1[1] = 0;
      return;
    }
    iVar1 = piVar2[2];
    *piVar2 = iVar3;
    piVar2[1] = CONCAT22(uStack_1e,local_20);
    if (iVar3 != iVar1) goto LAB_01147640;
  }
  else if (iVar3 != iVar1) goto LAB_01147640;
  FUN_01150aa8(piVar2,iVar3,1);
  iVar1 = piVar2[2];
LAB_01147640:
  *(byte *)(piVar2[1] + iVar1) = param_3 | 0x80;
  piVar2[2] = piVar2[2] + 1;
  *param_1 = 5;
  param_1[1] = param_2;
  return;
}

