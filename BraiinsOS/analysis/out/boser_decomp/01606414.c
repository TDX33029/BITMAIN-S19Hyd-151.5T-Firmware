// FUN_01606414 @ 01606414 size=244 calls_out=2 calls_in=1
// strings: 

void FUN_01606414(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = *param_2;
  uVar4 = *(undefined4 *)(param_3 + 0x24);
  *param_1 = 0;
  param_1[1] = uVar4;
  param_1[2] = 0;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_3 + 0x1c);
  }
  else {
    uVar1 = *(uint *)(param_3 + 0x28);
    uVar3 = param_2[2];
    uVar6 = *(uint *)(param_3 + 0x1c);
    uVar5 = uVar3 - uVar1;
    if (uVar6 < uVar3 - uVar1) {
      uVar5 = uVar6;
    }
    if (uVar5 == 0) {
      uVar3 = *(uint *)(param_3 + 0x18);
    }
    else {
      uVar7 = uVar5 + uVar1;
      if ((CARRY4(uVar5,uVar1)) || (uVar3 < uVar7)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar1,uVar7,uVar3,&DAT_01d05b20);
      }
      uVar8 = *(uint *)(param_3 + 0x18);
      uVar3 = uVar8 + uVar5;
      if ((CARRY4(uVar8,uVar5)) || (0x14ccc < uVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar8,uVar3,0x14ccc,&DAT_01d05b30);
      }
      FUN_01bed4e2(param_2[1] + uVar1,*(int *)(param_3 + 4) + uVar8,uVar5);
      uVar1 = uVar7;
    }
    iVar2 = uVar6 - uVar5;
    *(uint *)(param_3 + 0x28) = uVar1;
    param_1[2] = uVar1;
    *(uint *)(param_3 + 0x18) = uVar3;
    *(int *)(param_3 + 0x1c) = iVar2;
  }
  if (*(char *)(param_3 + 0x35) == '\x01' && iVar2 == 0) {
    *param_1 = 1;
    return;
  }
  return;
}

