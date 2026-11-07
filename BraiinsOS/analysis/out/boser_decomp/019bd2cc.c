// FUN_019bd2cc @ 019bd2cc size=372 calls_out=8 calls_in=1
// strings: 

void FUN_019bd2cc(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined2 local_24;
  
  FUN_019a66e4(&local_3c,param_2,param_3,&DAT_0056e9cc,4);
  local_30 = 0;
  local_24 = 0;
  local_2c = 0x1b6;
  local_28 = 1;
  FUN_019a581c(&local_44,&local_30,local_38,local_34);
  FUN_0134bd64(local_3c,local_38);
  if ((char)local_44 == '\x04') {
    local_3c = local_40;
    FUN_019ca9c4(&local_30,&local_3c,0x400);
    iVar4 = local_28;
    iVar3 = local_2c;
    iVar2 = local_30;
    if (local_30 == -0x80000000) {
      FUN_0069263c(local_2c,local_28);
      *param_1 = -0x80000000;
      FUN_01bf01d6(local_40);
    }
    else {
      DataMemoryBarrier(0xb);
      if (DAT_01d50360 != 2) {
        FUN_019c9de0();
      }
      DataMemoryBarrier(0xb);
      iVar6 = DAT_01d5035c;
      do {
        iVar1 = DAT_01d5035c;
        if (iVar6 < 1) {
          FUN_01bf01d6(local_40);
          local_40 = -1;
          break;
        }
        if (DAT_01d5035c == iVar6) {
          DataMemoryBarrier(0xb);
          bVar5 = (bool)hasExclusiveAccess(0x1d5035c);
          if (bVar5) {
            DAT_01d5035c = iVar6 + -1;
          }
        }
        else {
          bVar5 = false;
          ClearExclusiveLocal();
        }
        DataMemoryBarrier(0xb);
        iVar6 = iVar1;
      } while (!bVar5);
      if (*param_4 != -1) {
        FUN_019bd26c();
      }
      *param_1 = iVar2;
      param_1[1] = iVar3;
      param_1[2] = iVar4;
      *param_4 = local_40;
    }
  }
  else {
    FUN_0069263c(local_44,local_40);
    *param_1 = -0x80000000;
  }
  return;
}

