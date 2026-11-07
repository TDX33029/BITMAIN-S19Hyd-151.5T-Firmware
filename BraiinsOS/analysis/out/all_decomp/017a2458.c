// FUN_017a2458 @ 017a2458 size=556 calls_out=3 calls_in=1
// strings: 

void FUN_017a2458(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  iVar2 = *(int *)(param_1 + 300);
  local_24 = DAT_018ddaf8;
  if (iVar2 == 1) {
    if (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8)) goto LAB_017a260c;
    uVar1 = *(uint *)(param_1 + 0x980);
    uVar4 = *(uint *)(param_1 + 0x984);
    if (uVar1 < uVar4) {
      uVar6 = 0x1ffffffb8;
      goto LAB_017a24e0;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x97c);
    if (*(int *)(param_1 + 0x974) != 0) {
      iVar3 = *(int *)(param_1 + 0x130);
      goto LAB_017a252c;
    }
LAB_017a24c0:
    uVar6 = FUN_017a15c4(param_1,2,(uVar1 + *(int *)(param_1 + 0x988)) - uVar4);
    iVar2 = (int)((ulonglong)uVar6 >> 0x20);
    if (0xffffff88 < (uint)uVar6) goto LAB_017a24e0;
    if (*(int *)(param_1 + 300) == 1) {
      *(undefined4 *)(param_1 + 0x97c) = uVar5;
      *(uint *)(param_1 + 0x980) = uVar1;
      *(uint *)(param_1 + 0x984) = uVar4;
      if (*(int *)(param_1 + 0x130) == 1) {
        *(int *)(param_1 + 0x98c) = *(int *)(param_2 + 4) - *(int *)(param_2 + 8);
        goto LAB_017a2660;
      }
    }
    else if (*(int *)(param_1 + 0x130) == 1) {
      *(int *)(param_1 + 0x98c) = *(int *)(param_2 + 4) - *(int *)(param_2 + 8);
    }
  }
  else {
    if (*(uint *)(param_2 + 4) < *(uint *)(param_2 + 8)) {
LAB_017a260c:
      uVar6 = CONCAT44(iVar2,0xffffffba);
      goto LAB_017a24e0;
    }
    if (*(int *)(param_1 + 0x974) == 0) {
      uVar4 = 0;
      uVar1 = 0;
      uVar5 = 0;
      goto LAB_017a24c0;
    }
    uVar4 = 0;
    iVar3 = *(int *)(param_1 + 0x130);
    uVar5 = 0;
    uVar1 = 0;
LAB_017a252c:
    if (iVar3 == 1) {
LAB_017a2660:
      if (*(int *)(param_2 + 4) - *(int *)(param_2 + 8) != *(int *)(param_1 + 0x98c)) {
        uVar6 = CONCAT44(iVar2,0xffffffce);
        goto LAB_017a24e0;
      }
    }
  }
  local_30 = uVar5;
  local_2c = uVar1;
  local_28 = uVar4;
  uVar6 = FUN_017a05f8(param_1,param_2,&local_30,2);
  if ((uint)uVar6 < 0xffffff89) {
    uVar4 = (uint)((ulonglong)uVar6 >> 0x20);
    if (*(int *)(param_1 + 300) == 1) {
      *(uint *)(param_1 + 0x980) = local_2c;
      *(undefined4 *)(param_1 + 0x97c) = local_30;
      *(uint *)(param_1 + 0x984) = local_28;
      uVar4 = local_2c;
    }
    if (*(int *)(param_1 + 0x130) == 1) {
      *(int *)(param_1 + 0x98c) = *(int *)(param_2 + 4) - *(int *)(param_2 + 8);
    }
    uVar1 = *(int *)(param_1 + 0x96c) - *(int *)(param_1 + 0x970);
    uVar6 = CONCAT44(uVar4,uVar1);
    if (((uVar1 < 0xffffff89) && (uVar6 = CONCAT44(uVar4,uVar1), *(int *)(param_1 + 0x100) < 1)) &&
       (uVar6 = CONCAT44(uVar4,uVar1), *(int *)(param_1 + 0x978) == 0)) {
      uVar6 = CONCAT44(uVar4,uVar1 + 3 + *(int *)(param_1 + 0xe0) * 4);
    }
  }
LAB_017a24e0:
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),local_24 ^ DAT_018ddaf8,0);
  }
  return;
}

