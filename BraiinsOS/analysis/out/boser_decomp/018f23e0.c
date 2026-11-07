// FUN_018f23e0 @ 018f23e0 size=284 calls_out=3 calls_in=2
// strings: 

void FUN_018f23e0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_c0 [20];
  undefined1 auStack_ac [20];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined2 local_20;
  
  puVar3 = auStack_c0;
  if (*(char *)(param_2 + 5) == '\x01') {
    local_98 = *param_2;
    local_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    uStack_88 = param_2[4];
    uStack_84 = param_2[5];
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24);
    cVar1 = '\0';
    if (iVar2 == -1 && (uint)(*(uint *)(param_1 + 0x20) < 0xfffffffe) <= -iVar2 - 1U) {
      cVar1 = '\x02';
    }
    if (*(uint *)(param_1 + 0x20) == *(uint *)(param_1 + 0x18) && iVar2 == *(int *)(param_1 + 0x1c))
    {
      cVar1 = '\x01';
    }
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') {
        return;
      }
      if (*(short *)(param_1 + 0x240) != 5) {
        if (*(char *)(param_1 + 0x255) == '\0') {
          *(undefined2 *)(param_1 + 0x255) = 0x101;
          local_20 = 4;
          local_94 = 0;
          local_98 = 0x80000001;
          FUN_018f1fc4(param_1,&local_98,*(char *)(param_1 + 0x31) == '\x02');
          return;
        }
        return;
      }
      *(undefined1 *)(param_1 + 0x25b) = 1;
    }
    local_98 = *param_2;
    local_94 = param_2[1];
    uStack_90 = param_2[2];
    uStack_8c = param_2[3];
    uStack_88 = param_2[4];
    uStack_84 = param_2[5];
    puVar3 = auStack_ac;
  }
  FUN_0190aedc(puVar3,param_1);
  FUN_018f2368(param_1,puVar3);
  return;
}

