// FUN_00b06654 @ 00b06654 size=136 calls_out=2 calls_in=0
// strings: 

void FUN_00b06654(undefined4 *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)*param_1;
  iVar5 = *piVar4;
  iVar6 = piVar4[1];
  *piVar4 = 0;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d293f0);
  }
  cVar1 = *(char *)(iVar5 + 0xc);
  *(undefined1 *)(iVar5 + 0xc) = 2;
  if (cVar1 == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d24074);
  }
  uVar2 = *(undefined1 *)(iVar5 + 0xf);
  uVar3 = *(undefined2 *)(iVar5 + 0xd);
  FUN_01bed864(iVar6,iVar5,0xc);
  *(char *)(iVar6 + 0xc) = cVar1;
  *(undefined2 *)(iVar6 + 0xd) = uVar3;
  *(undefined1 *)(iVar6 + 0xf) = uVar2;
  return;
}

