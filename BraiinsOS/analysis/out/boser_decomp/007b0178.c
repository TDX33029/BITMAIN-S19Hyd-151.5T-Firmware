// FUN_007b0178 @ 007b0178 size=120 calls_out=0 calls_in=2
// strings: 

void FUN_007b0178(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_20;
  uint local_1c;
  
  (**(code **)(param_2[1] + 0xc))(&local_20,*param_2);
  if (((char)local_20 == '\x04') || ((local_20 & 0xff) == 4)) {
    uVar1 = param_2[2];
    iVar2 = param_2[3];
    param_1[1] = local_1c;
    *(undefined1 *)param_1 = 4;
    param_2[2] = uVar1 + local_1c;
    param_2[3] = iVar2 + (uint)CARRY4(uVar1,local_1c);
  }
  else {
    *param_1 = local_20;
    param_1[1] = local_1c;
  }
  return;
}

