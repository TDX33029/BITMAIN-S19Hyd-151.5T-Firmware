// FUN_019afed4 @ 019afed4 size=196 calls_out=3 calls_in=4
// strings: 

void FUN_019afed4(int param_1)

{
  uint extraout_r1;
  char *pcVar1;
  uint uVar2;
  char *pcStack_54;
  uint uStack_50;
  undefined1 local_4c;
  undefined2 local_38;
  undefined1 local_36;
  byte local_34 [28];
  
  pcVar1 = *(char **)(param_1 + 4);
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == 0) {
    local_36 = false;
  }
  else {
    local_36 = *pcVar1 == '/';
  }
  local_4c = 6;
  local_38 = 0x201;
  pcStack_54 = pcVar1;
  uStack_50 = uVar2;
  FUN_01982524(local_34,&pcStack_54);
  if (local_34[0] - 7 < 3) {
    FUN_0198294c(&pcStack_54);
    if ((extraout_r1 != 0 && extraout_r1 != uVar2) &&
       ((extraout_r1 == 0 || uVar2 <= extraout_r1 ||
        ((0x7fffffff < (uint)(int)(pcVar1 + extraout_r1)[-1] && (pcVar1[extraout_r1] < '\0')))))) {
      FUN_0199ef60(pcVar1,uVar2,extraout_r1);
    }
    if (extraout_r1 <= uVar2) {
      *(uint *)(param_1 + 8) = extraout_r1;
    }
  }
  return;
}

