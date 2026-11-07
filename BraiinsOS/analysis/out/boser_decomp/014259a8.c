// FUN_014259a8 @ 014259a8 size=344 calls_out=5 calls_in=2
// strings: 

void FUN_014259a8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int local_38;
  undefined1 local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  if (param_1 == 0) {
    return;
  }
  FUN_01933ff0(&local_30,param_1 + 8);
  iVar2 = local_2c;
  if (local_30 == 1) {
    local_34 = (undefined1)local_28;
    local_38 = local_2c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_38,&DAT_01cf4960,&DAT_01cf49b0);
  }
  uVar6 = local_28 & 0xff;
  puVar4 = (uint *)(local_2c + 0x20);
  if (*(undefined1 **)(local_2c + 0x38) != &DAT_3b9aca00) {
    FUN_01421a04(&local_30,*(undefined4 *)(local_2c + 0x40),*(undefined4 *)(local_2c + 0x44));
    *(uint *)(iVar2 + 0x30) = local_30;
    *(int *)(iVar2 + 0x34) = local_2c;
    *(uint *)(iVar2 + 0x38) = local_28;
  }
  if (*(undefined1 **)(iVar2 + 0x28) != &DAT_3b9aca00) {
    FUN_01421a04(&local_30,*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44));
    iVar3 = *(int *)(iVar2 + 0x24);
    uVar5 = *puVar4;
    bVar1 = (int)(local_2c - (iVar3 + (uint)(local_30 < uVar5))) < 0 ==
            (SBORROW4(local_2c,iVar3) != SBORROW4(local_2c - iVar3,(uint)(local_30 < uVar5)));
    if (local_30 == uVar5 && local_2c == iVar3) {
      bVar1 = *(uint *)(iVar2 + 0x28) <= local_28;
    }
    if (!bVar1) goto LAB_01425ab4;
    *(undefined1 **)(iVar2 + 0x28) = &DAT_3b9aca00;
  }
  if ((*(int *)(iVar2 + 8) == 1) &&
     (*(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + param_2,
     *(undefined1 **)(iVar2 + 0x18) == &DAT_3b9aca00)) {
    FUN_01425390();
  }
LAB_01425ab4:
  FUN_00a97e8c(iVar2,uVar6);
  return;
}

