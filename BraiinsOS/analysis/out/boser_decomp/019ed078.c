// FUN_019ed078 @ 019ed078 size=220 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_019ed078(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int local_20;
  uint uStack_1c;
  int iStack_18;
  uint uStack_14;
  
  pcVar5 = *(code **)(param_2 + 0xc);
  (*pcVar5)(&local_20,param_1);
  if ((local_20 == 0x50f052f7 && iStack_18 == -0x20684cdb) &&
      (uStack_1c == 0x9909b2a5 && uStack_14 == 0xb55cb20e)) {
    iVar1 = 8;
    puVar4 = param_1 + 1;
  }
  else {
    (*pcVar5)(&local_20,param_1);
    uVar3 = uStack_1c ^ 0x63eb502c | uStack_14 ^ 0xb98b1b71;
    iVar1 = 4;
    puVar4 = param_1;
    if ((local_20 != -0x2934a293 || iStack_18 != 0x57a64178) || uVar3 != 0) {
      uVar2 = 0;
      goto LAB_019ed14c;
    }
  }
  uVar3 = *(uint *)((int)param_1 + iVar1);
  uVar2 = *puVar4;
LAB_019ed14c:
  return CONCAT44(uVar3,uVar2);
}

