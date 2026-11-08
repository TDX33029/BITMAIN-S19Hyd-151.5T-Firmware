// FUN_015f427c @ 015f427c size=188 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_015f427c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 unaff_r7;
  undefined8 uVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iVar1 = (**(code **)(param_3 + 0x10))(param_2);
  uVar3 = 0;
  uVar2 = ((uint *)*param_1)[1];
  if (uVar2 <= *(uint *)(iVar1 + 0xc) &&
      (uint)(*(uint *)(iVar1 + 8) <= *(uint *)*param_1) <= uVar2 - *(uint *)(iVar1 + 0xc)) {
    uVar4 = (**(code **)(param_3 + 0x1c))(param_2);
    iVar1 = (int)uVar4;
    (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_28,iVar1);
    unaff_r7 = 0x4f0c4dfb;
    if ((local_28 == -0x2e0e688 && iStack_20 == -0x6fe2380b) &&
        (iStack_24 == 0x4f0c4dfb && iStack_1c == -0x2ead107b)) {
      uVar3 = *(undefined4 *)(iVar1 + 0x44);
      unaff_r7 = *(undefined4 *)(iVar1 + 0x48);
    }
  }
  return CONCAT44(unaff_r7,uVar3);
}

