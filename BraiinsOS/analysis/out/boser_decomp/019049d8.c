// FUN_019049d8 @ 019049d8 size=268 calls_out=4 calls_in=0
// strings: internal error: entered unreachable code

void FUN_019049d8(undefined4 *param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  
  sVar1 = *param_2;
  if (sVar1 == 3) {
    uVar4 = 0x13;
    puVar3 = &DAT_00533294;
  }
  else {
    if (sVar1 == 5) {
      puVar3 = &UNK_0056a5e8;
    }
    else {
      if (sVar1 != 7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d24c74);
      }
      puVar3 = &DAT_0056a498;
    }
    uVar4 = 0x10;
  }
  uVar5 = *(undefined4 *)(*(int *)(param_2 + 2) + 0x10);
  uVar6 = *(undefined4 *)(*(int *)(param_2 + 2) + 0x14);
  FUN_019269f4(&local_34,0x30,puVar3,uVar4,1,0);
  FUN_019269f4(&local_28,3,&DAT_00523849,1,uVar5,uVar6);
  iVar2 = local_24;
  FUN_01657150(&local_34,local_24,local_24 + local_20);
  FUN_0134bd64(local_28,iVar2);
  FUN_019269f4(&local_28,0x30,local_30,local_2c,1,0);
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  FUN_0134bd64(local_34,local_30);
  return;
}

