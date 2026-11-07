// FUN_018ee53c @ 018ee53c size=288 calls_out=3 calls_in=1
// strings: 

void FUN_018ee53c(char *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 local_30;
  uint local_28;
  char local_24;
  char local_23;
  undefined1 uStack_22;
  char cStack_21;
  undefined2 uStack_20;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  
  FUN_01930f74(&local_24,&DAT_01d23420,param_2);
  if (local_24 == '\x18') {
    local_30 = FUN_0192fac8(param_2,CONCAT22(uStack_1e,uStack_20));
    if ((int)local_30 == 0) {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0] = '\v';
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      return;
    }
    cVar1 = '\0';
    cVar2 = '\0';
    local_28 = 0;
    if ((int)((ulonglong)local_30 >> 0x20) != 0) {
      cVar1 = '\0';
      do {
        FUN_0190ceb8(&local_24,&local_30);
        if (local_24 != '\x18') {
          *(uint *)(param_1 + 6) = CONCAT22(uStack_1c,uStack_1e);
          *(undefined2 *)(param_1 + 10) = uStack_1a;
          *(uint *)(param_1 + 2) = CONCAT22(uStack_20,CONCAT11(cStack_21,uStack_22));
          param_1[1] = local_23;
          goto LAB_018ee650;
        }
        if (CONCAT11(cStack_21,uStack_22) == 4) {
          cVar2 = '\x01';
        }
        else if (CONCAT11(cStack_21,uStack_22) == 5) {
          cVar1 = '\x01';
        }
      } while (local_28 < local_30._4_4_);
    }
    param_1[2] = cVar2;
    param_1[1] = cVar1;
    local_24 = '\x18';
  }
  else {
    param_1[3] = cStack_21;
    *(ushort *)(param_1 + 1) = CONCAT11(uStack_22,local_23);
    *(uint *)(param_1 + 4) = CONCAT22(uStack_1e,uStack_20);
    *(uint *)(param_1 + 8) = CONCAT22(uStack_1a,uStack_1c);
  }
LAB_018ee650:
  *param_1 = local_24;
  return;
}

