// FUN_01592e58 @ 01592e58 size=272 calls_out=3 calls_in=1
// strings: 

void FUN_01592e58(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar3 = *(uint *)(param_1 + 0x40);
  uVar4 = *(uint *)(param_1 + 0x44);
  uVar6 = *(uint *)(param_1 + 0x48);
  uVar7 = param_3 * 8;
  uVar2 = *(uint *)(param_1 + 0xd0);
  uVar1 = param_3 >> 0x1d;
  bVar8 = CARRY4(uVar4,uVar1) || CARRY4(uVar4 + uVar1,(uint)CARRY4(uVar3,uVar7));
  *(uint *)(param_1 + 0x40) = uVar3 + uVar7;
  *(uint *)(param_1 + 0x44) = uVar4 + uVar1 + (uint)CARRY4(uVar3,uVar7);
  *(uint *)(param_1 + 0x48) = uVar6 + bVar8;
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar6,(uint)bVar8);
  uVar7 = 0x80 - uVar2;
  iVar5 = param_1 + 0x50;
  if (uVar7 <= param_3) {
    if (uVar2 != 0) {
      if (0x80 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar2,0x80,0x80,&DAT_018a9f7c);
      }
      FUN_016dd1aa(iVar5 + uVar2,param_2,uVar7);
      *(undefined4 *)(param_1 + 0xd0) = 0;
      FUN_01592f70(param_1,iVar5,1);
      param_2 = param_2 + uVar7;
      param_3 = param_3 - uVar7;
    }
    FUN_01592f70(param_1,param_2,param_3 >> 7);
    FUN_016dd1aa(iVar5,param_2 + (param_3 & 0x7fffff80),param_3 & 0x7f);
    *(uint *)(param_1 + 0xd0) = param_3 & 0x7f;
    return;
  }
  if (CARRY4(uVar2,param_3) || 0x80 < uVar2 + param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar2,uVar2 + param_3,0x80,&DAT_018a9f8c);
  }
  FUN_016dd1aa(iVar5 + uVar2,param_2,param_3);
  *(uint *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + param_3;
  return;
}

