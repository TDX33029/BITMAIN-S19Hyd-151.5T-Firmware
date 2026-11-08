// FUN_012c2644 @ 012c2644 size=240 calls_out=4 calls_in=0
// strings: 

void FUN_012c2644(undefined1 *param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_2c;
  int local_28;
  
  iVar1 = *param_2;
  iVar2 = param_2[2];
  uVar7 = FUN_012c2334(param_3);
  uVar8 = FUN_012c3898(param_4);
  FUN_01bed93e((int)uVar8,0,(int)((ulonglong)uVar8 >> 0x20));
  FUN_01342f2c(&local_2c,param_2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20),uVar8,param_5);
  if (local_2c == 2) {
    param_1[1] = (undefined1)local_28;
    *param_1 = 4;
    iVar3 = param_2[2];
    *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + (*param_2 - iVar1);
    uVar5 = *(int *)(param_4 + 8) + (iVar3 - iVar2);
    uVar6 = *(uint *)(param_4 + 0xc);
    if (*(uint *)(param_4 + 0xc) < uVar5) {
      uVar6 = uVar5;
    }
    *(uint *)(param_4 + 8) = uVar5;
    *(uint *)(param_4 + 0xc) = uVar6;
    return;
  }
  piVar4 = (int *)thunk_FUN_01be5118(8);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *piVar4 = local_2c;
  piVar4[1] = local_28;
  FUN_019a6b0c(param_1,0x28,piVar4,&DAT_01ce6900);
  return;
}

