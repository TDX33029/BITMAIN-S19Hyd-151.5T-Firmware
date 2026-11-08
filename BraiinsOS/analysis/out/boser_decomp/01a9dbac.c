// FUN_01a9dbac @ 01a9dbac size=400 calls_out=6 calls_in=1
// strings: buffer underflow | delimited length exceeded

int FUN_01a9dbac(char param_1,int *param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 local_3e;
  char local_3d;
  undefined1 auStack_3c [12];
  char *local_30;
  code *local_2c;
  undefined1 *local_28;
  code *local_24;
  
  if (param_1 == '\x02') {
    FUN_01a9d538(&local_30,param_3);
    if (local_30 != (char *)0x1) {
      uVar3 = *(uint *)(param_3 + 4);
      if ((uint)-(int)local_24 < (uint)(local_28 <= uVar3)) {
        uVar5 = uVar3 - (int)local_28;
        if (uVar5 < uVar3) {
          do {
            local_30 = (char *)0x0;
            iVar1 = FUN_01a9dd84(0,&local_30,param_3);
            pcVar2 = local_30;
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = param_2[2];
            if (iVar1 == *param_2) {
              FUN_007b4428(param_2);
            }
            *(char **)(param_2[1] + iVar1 * 4) = pcVar2;
            uVar3 = *(uint *)(param_3 + 4);
            param_2[2] = iVar1 + 1;
          } while (uVar5 < uVar3);
        }
        if (uVar3 == uVar5) {
          return 0;
        }
        uVar4 = 0x19;
        pcVar2 = "delimited length exceeded";
      }
      else {
        uVar4 = 0x10;
        pcVar2 = "buffer underflow";
      }
      iVar1 = FUN_01aa0da0(pcVar2,uVar4);
      return iVar1;
    }
  }
  else {
    local_3e = 0;
    local_3d = param_1;
    if (param_1 == '\0') {
      local_30 = (char *)0x0;
      local_2c = (code *)FUN_01a9dd84(0,&local_30,param_3);
      pcVar2 = local_30;
      if (local_2c == (code *)0x0) {
        iVar1 = param_2[2];
        if (iVar1 == *param_2) {
          FUN_007b4428(param_2);
        }
        *(char **)(param_2[1] + iVar1 * 4) = pcVar2;
        param_2[2] = iVar1 + 1;
        local_2c = (code *)0x0;
      }
    }
    else {
      local_28 = &local_3e;
      local_24 = FUN_01a9dd48;
      local_2c = FUN_01a9dd48;
      local_30 = &local_3d;
      FUN_01a924e8(auStack_3c,&local_30);
      local_2c = (code *)FUN_01aa428c(auStack_3c);
    }
  }
  return (int)local_2c;
}

