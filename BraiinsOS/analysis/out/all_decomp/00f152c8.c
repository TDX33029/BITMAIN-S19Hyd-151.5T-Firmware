// FUN_00f152c8 @ 00f152c8 size=456 calls_out=10 calls_in=1
// strings: 

void FUN_00f152c8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_r9;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [88];
  int local_80;
  uint local_7c;
  int local_78;
  
  uVar1 = (&switchD_00f152e8::switchdataD_00f152ec)[*(byte *)(param_2 + 0x18)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x18)) {
  case 0:
    FUN_00ef606c(&local_80,param_2[1],5,0,0,*param_2,param_2[1],&DAT_0187d058);
    FUN_016dd1aa(auStack_d8,&local_80,0x58);
    uVar1 = FUN_016dd1aa(param_2 + 2,auStack_d8,0x58);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187d068);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187d068);
  }
  uVar6 = thunk_FUN_016de0ee(uVar1,0x40);
  iVar4 = (int)uVar6 + (int)((ulonglong)uVar6 >> 0x20);
  uVar1 = (uint)*(byte *)(iVar4 + 0x38);
  if (uVar1 != 1) {
    if (uVar1 == 2) goto LAB_00f153a0;
    FUN_015e8e6c(iVar4,FUN_005bc49c);
    *(undefined1 *)(iVar4 + 0x38) = 1;
  }
  uVar1 = ~(uint)*(byte *)(iVar4 + 0x30) & 1 | (uint)(*(char *)(iVar4 + 0x31) != '\0');
LAB_00f153a0:
  (**(code **)(param_2[0x17] + 0xc))(&local_80,param_2[0x16],param_3);
  if (local_80 == -0x7fffffff) {
    iVar4 = FUN_016540e8((uint)(uVar1 == 2) | uVar1 & 1,param_2 + 2,*param_3);
    if (iVar4 != 0) {
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 0x18) = 3;
      return;
    }
    iVar4 = -0x7fffffff;
  }
  else {
    uVar1 = local_7c;
    iVar4 = local_80;
    unaff_r9 = local_78;
  }
  puVar5 = (undefined4 *)param_2[0x17];
  uVar3 = param_2[0x16];
  pcVar2 = (code *)*puVar5;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(uVar3);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(uVar3);
  }
  FUN_00a07b4c(param_2 + 2);
  if (iVar4 == -0x7fffffff) {
    uVar1 = FUN_00f155bc(&DAT_0035b6e7,0xd);
    iVar4 = -0x80000000;
  }
  *param_1 = iVar4;
  param_1[1] = uVar1;
  param_1[2] = unaff_r9;
  *(undefined1 *)(param_2 + 0x18) = 1;
  return;
}

