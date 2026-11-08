// FUN_012a1904 @ 012a1904 size=164 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_012a1904(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_r8;
  undefined4 uVar6;
  
  if (*(int *)(param_2 + 0x124) != 0) {
    uVar4 = *param_1;
    uVar5 = param_1[1];
    if ((uVar5 <= *(uint *)(param_2 + 0x128)) &&
       (iVar1 = thunk_FUN_01bed842(uVar4,*(int *)(param_2 + 0x124),uVar5), iVar1 == 0)) {
      uVar6 = *(undefined4 *)(param_2 + 0x11c);
      unaff_r8 = *(undefined4 *)(param_2 + 0x120);
      goto LAB_012a1990;
    }
    uVar6 = *(undefined4 *)(param_2 + 0x11c);
    unaff_r8 = *(undefined4 *)(param_2 + 0x120);
    puVar3 = (uint *)(*(int *)(param_2 + 0x3c) + 4);
    for (iVar1 = *(int *)(param_2 + 0x40) * 0xc; iVar1 != 0; iVar1 = iVar1 + -0xc) {
      if ((uVar5 <= *puVar3) && (iVar2 = thunk_FUN_01bed842(uVar4,puVar3[-1],uVar5), iVar2 == 0))
      goto LAB_012a1990;
      puVar3 = puVar3 + 3;
    }
  }
  uVar6 = 0;
LAB_012a1990:
  return CONCAT44(unaff_r8,uVar6);
}

