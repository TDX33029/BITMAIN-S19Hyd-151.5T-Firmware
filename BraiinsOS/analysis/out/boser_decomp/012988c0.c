// FUN_012988c0 @ 012988c0 size=160 calls_out=2 calls_in=1
// strings: 

void FUN_012988c0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar6 = *param_2;
  iVar5 = param_2[1];
  iVar3 = param_1[2];
  uVar2 = iVar5 - iVar6;
  if ((uint)(*param_1 - iVar3) < uVar2) {
    FUN_006520b4(param_1,iVar3,uVar2,4,0xc);
    iVar3 = param_1[2];
  }
  iVar4 = iVar3;
  if (iVar5 != iVar6) {
    iVar5 = param_1[1];
    *param_2 = 1;
    FUN_012b31d4(&local_28,*(undefined4 *)(param_2[2] + 4),*(undefined4 *)(param_2[2] + 8));
    iVar4 = iVar3 + 1;
    puVar1 = (undefined4 *)(iVar5 + iVar3 * 0xc);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uStack_20;
  }
  param_1[2] = iVar4;
  return;
}

