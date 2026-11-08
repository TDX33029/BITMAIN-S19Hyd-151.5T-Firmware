// FUN_00013808 @ 00013808  size=920  callers=0
// program: FileParser


undefined4 FUN_00013808(int param_1,undefined4 *param_2)

{
  size_t sVar1;
  undefined1 auStack_b10 [256];
  undefined1 auStack_a10 [2048];
  char local_210 [128];
  char local_190 [128];
  char local_110 [256];
  undefined4 local_10;
  char local_b;
  char local_a;
  undefined1 local_9;
  
  if (param_1 < 2) {
    FUN_000108f8(*param_2);
    local_10 = 1;
  }
  else if (*(char *)param_2[1] == '-') {
    local_110[0] = '\0';
    local_110[1] = '\0';
    local_110[2] = '\0';
    local_110[3] = '\0';
    memset(local_110 + 4,0,0xfc);
    local_190[0] = '\0';
    local_190[1] = '\0';
    local_190[2] = '\0';
    local_190[3] = '\0';
    memset(local_190 + 4,0,0x7c);
    local_210[0] = '\0';
    local_210[1] = '\0';
    local_210[2] = '\0';
    local_210[3] = '\0';
    memset(local_210 + 4,0,0x7c);
    memset(auStack_a10,0,0x800);
    local_9 = 0;
    local_a = '\0';
    local_b = '\0';
    memset(auStack_b10,0,0xfd);
    if (param_1 == 5) {
      sVar1 = strlen((char *)param_2[2]);
      if (0xff < sVar1) {
        puts("fileName Too Long!");
        return 3;
      }
      strcpy(local_110,(char *)param_2[2]);
      sVar1 = strlen((char *)param_2[3]);
      if (0x7f < sVar1) {
        puts("fileName Too Long!");
        return 3;
      }
      strcpy(local_190,(char *)param_2[3]);
      sVar1 = strlen((char *)param_2[4]);
      if (0x7f < sVar1) {
        puts("pemName Too Long!");
        return 4;
      }
      strcpy(local_210,(char *)param_2[4]);
    }
    else if (param_1 == 3) {
      sVar1 = strlen((char *)param_2[2]);
      if (0x7f < sVar1) {
        puts("fileName Too Long!");
        return 3;
      }
      strcpy(local_190,(char *)param_2[2]);
    }
    else if (param_1 != 2) {
      puts("Param Err!");
      FUN_000108f8(*param_2);
      return 3;
    }
    local_10 = 0;
    switch(*(undefined1 *)(param_2[1] + 1)) {
    default:
      puts("Command Not Support!");
      FUN_000108f8(*param_2);
      local_10 = 5;
      break;
    case 0x6e:
      local_10 = FUN_000109a8(local_190);
      break;
    case 0x71:
      local_10 = FUN_00010b9c();
      break;
    case 0x78:
      local_b = '\x01';
    case 0x70:
      if (local_b == '\0') {
        local_a = '\x01';
      }
    case 0x73:
      if (local_a == '\0') {
        local_9 = 1;
      }
    case 0x66:
      local_10 = FUN_00012c40(local_190,local_110,local_210,auStack_a10,local_9,local_a,local_b);
    }
  }
  else {
    FUN_000108f8(*param_2);
    local_10 = 2;
  }
  return local_10;
}

