// FUN_013776a8 @ 013776a8 size=160 calls_out=0 calls_in=1
// strings: 

void FUN_013776a8(int *param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = *(char *)((int)param_1 + 10);
  if (*(char *)((int)param_2 + 10) != '\x02') {
    cVar10 = *(char *)((int)param_2 + 10);
  }
  bVar1 = *(byte *)(param_2 + 2);
  cVar6 = *(char *)((int)param_1 + 0xb);
  if (*(char *)((int)param_2 + 0xb) != '\x02') {
    cVar6 = *(char *)((int)param_2 + 0xb);
  }
  cVar5 = (char)param_1[3];
  if ((char)param_2[3] != '\x02') {
    cVar5 = (char)param_2[3];
  }
  piVar3 = param_1;
  if (bVar1 != 0) {
    piVar3 = param_2;
  }
  cVar9 = *(char *)((int)param_1 + 0xd);
  if (*(char *)((int)param_2 + 0xd) != '\x03') {
    cVar9 = *(char *)((int)param_2 + 0xd);
  }
  iVar8 = *param_2;
  if (iVar8 == 2) {
    param_2 = param_1;
  }
  iVar4 = param_2[1];
  *(char *)((int)param_1 + 0xd) = cVar9;
  uVar2 = *(undefined1 *)((int)piVar3 + 9);
  *(char *)(param_1 + 3) = cVar5;
  *(char *)((int)param_1 + 0xb) = cVar6;
  iVar7 = *param_1;
  if (iVar8 != 2) {
    iVar7 = iVar8;
  }
  *param_1 = iVar7;
  *(char *)((int)param_1 + 10) = cVar10;
  *(undefined1 *)((int)param_1 + 9) = uVar2;
  *(byte *)(param_1 + 2) = (bVar1 | *(byte *)(param_1 + 2)) & 1;
  param_1[1] = iVar4;
  return;
}

