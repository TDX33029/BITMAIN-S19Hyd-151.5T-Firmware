// FUN_010169f4 @ 010169f4 size=300 calls_out=5 calls_in=3
// strings: buffer underflow

undefined4 FUN_010169f4(char param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  char **ppcVar4;
  char *pcVar5;
  uint uVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 local_3e;
  char local_3d;
  undefined1 auStack_3c [12];
  char *local_30;
  code *local_2c;
  undefined1 *local_28;
  code *local_24;
  
  local_3e = 1;
  local_3d = param_1;
  if (param_1 == '\x01') {
    param_3 = (undefined4 *)*param_3;
    uVar2 = param_3[1];
    if (uVar2 < 8) {
      uVar1 = FUN_01aa0da0("buffer underflow",0x10);
      return uVar1;
    }
    piVar3 = (int *)*param_3;
    if ((uint)piVar3[1] < 8) {
      ppcVar4 = &local_30;
      uVar6 = 8;
      local_2c = (code *)0x0;
      local_30 = (char *)0x0;
      local_3d = '\x01';
      do {
        uVar8 = piVar3[1];
        if (uVar2 <= (uint)piVar3[1]) {
          uVar8 = uVar2;
        }
        if (uVar6 < uVar8) {
          uVar8 = uVar6;
        }
        FUN_01bed4e2(ppcVar4,*piVar3,uVar8);
        FUN_01283ef4(piVar3,uVar8);
        uVar2 = uVar2 - uVar8;
        ppcVar4 = (char **)((int)ppcVar4 + uVar8);
        uVar6 = uVar6 - uVar8;
        param_3[1] = uVar2;
      } while (uVar6 != 0);
      pcVar5 = local_30;
      pcVar7 = local_2c;
    }
    else {
      pcVar5 = *(char **)*piVar3;
      pcVar7 = (code *)((undefined4 *)*piVar3)[1];
      FUN_01283ef4(piVar3,8);
      param_3[1] = uVar2 - 8;
    }
    uVar1 = 0;
    *param_2 = pcVar5;
    param_2[1] = pcVar7;
  }
  else {
    local_28 = &local_3e;
    local_24 = FUN_00ef7f4c;
    local_2c = FUN_00ef7f4c;
    local_30 = &local_3d;
    FUN_01a924e8(auStack_3c,&local_30);
    uVar1 = FUN_01aa428c(auStack_3c);
  }
  return uVar1;
}

