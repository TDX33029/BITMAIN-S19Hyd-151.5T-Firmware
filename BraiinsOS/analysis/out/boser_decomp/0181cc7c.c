// FUN_0181cc7c @ 0181cc7c size=184 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_0181cc7c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r7;
  undefined8 uVar4;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  uVar3 = 0;
  if ((param_1 != 0) && (uVar4 = FUN_0178e3fc(param_1,&DAT_00568f18), (int)uVar4 != 0)) {
    uVar4 = (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0x1c))();
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    puVar1 = (undefined4 *)uVar4;
    (**(code **)(iVar2 + 0xc))(&local_28,puVar1);
    unaff_r7 = 0x771eb0d0;
    if ((local_28 == -0x5e7807ea && iStack_20 == -0x2ff7345f) &&
        (iStack_24 == 0x771eb0d0 && iStack_1c == -0x3092d58b)) {
      uVar3 = *puVar1;
      unaff_r7 = puVar1[1];
      thunk_FUN_01be4678(puVar1);
    }
    else {
      FUN_01443048(puVar1,iVar2);
    }
  }
  return CONCAT44(unaff_r7,uVar3);
}

