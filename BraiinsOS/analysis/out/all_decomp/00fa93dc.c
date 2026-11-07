// FUN_00fa93dc @ 00fa93dc size=176 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00fa93dc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28 [3];
  byte local_1c;
  byte local_1b;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0x10);
  iVar1 = (*pcVar3)(uVar4,0x27);
  uVar2 = 1;
  if (iVar1 == 0) {
    FUN_00fa9bcc(local_28,*param_1,0x101);
    if (local_1b < 0x81) {
      iVar1 = (**(code **)(iVar5 + 0xc))
                        (uVar4,(int)local_28 + (uint)local_1c,(uint)local_1b - (uint)local_1c);
    }
    else {
      iVar1 = (*pcVar3)(uVar4,local_28[0]);
    }
    uVar2 = 1;
    if (iVar1 == 0) {
      uVar2 = (*pcVar3)(uVar4,0x27);
    }
  }
  return uVar2;
}

