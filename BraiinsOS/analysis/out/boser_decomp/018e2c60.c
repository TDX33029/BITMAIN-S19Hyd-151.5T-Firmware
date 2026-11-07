// FUN_018e2c60 @ 018e2c60 size=148 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018e2c60(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_2 + 8);
  if (param_3 < uVar6) {
    piVar1 = (int *)(*(int *)(param_2 + 4) + param_3 * 0x14);
    iVar2 = *piVar1;
    iVar3 = piVar1[1];
    iVar4 = piVar1[2];
    iVar5 = piVar1[3];
    iVar7 = piVar1[4];
    FUN_01bed864(piVar1,piVar1 + 5,(uVar6 + ~param_3) * 0x14);
    uVar6 = uVar6 - 1;
    *(uint *)(param_2 + 8) = uVar6;
    if (iVar2 != 2) {
      *param_1 = iVar2;
      param_1[1] = iVar3;
      param_1[2] = iVar4;
      param_1[3] = iVar5;
      param_1[4] = iVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0066651c(param_3,uVar6,param_4);
}

