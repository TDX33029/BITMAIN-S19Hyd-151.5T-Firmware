// FUN_009de22c @ 009de22c size=184 calls_out=5 calls_in=2
// strings: 

void FUN_009de22c(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x17b) == '\x03') {
      if (*(char *)(param_1 + 0x178) == '\x03') {
        puVar2 = param_1 + 0xc6;
LAB_009de2c8:
        FUN_009de504(puVar2);
      }
      else if (*(char *)(param_1 + 0x178) == '\0') {
        puVar2 = param_1 + 0x14;
        goto LAB_009de2c8;
      }
      *(undefined1 *)((int)param_1 + 0x5ed) = 0;
    }
    else if (*(char *)(param_1 + 0x17b) == '\0') {
      FUN_019bb7e0(param_1[0x10],param_1[0x11]);
    }
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_009de2d8;
    }
    if (*(char *)(param_1 + 0x18) == '\x04') {
      FUN_01431b40(param_1 + 0x1e);
      FUN_009de478(param_1 + 0x1a);
    }
    else if (*(char *)(param_1 + 0x18) == '\x03') {
      FUN_009de42c(param_1 + 0x1a);
    }
  }
  param_1 = param_1 + 6;
LAB_009de2d8:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

