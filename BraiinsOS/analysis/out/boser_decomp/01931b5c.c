// FUN_01931b5c @ 01931b5c size=388 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01931b5c(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 auStack_30 [12];
  
  uVar2 = ((uint *)param_1[2])[1];
  uVar4 = param_5 - 0x10;
  if (uVar2 == 0 && (uVar4 <= *(uint *)param_1[2]) <= uVar2) {
    iVar1 = 0;
    iVar3 = 0;
    do {
      *(undefined1 *)(param_2 + iVar3) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0xc);
  }
  else {
    if (*param_1 - 5U < 2) {
      FUN_01bed4e2(local_50,param_2,0xc);
      FUN_01bed4e2(local_40,param_4 + uVar4,0x10);
      FUN_01bed4e2(auStack_30,param_2,0xc);
      iVar3 = FUN_01b37fa4(param_1[1],param_4,0,0,param_4,uVar4,local_40,0x1c,param_3,5);
      iVar1 = 0;
      do {
        local_50[iVar1] = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xc);
    }
    else {
      FUN_01bed4e2(local_40,param_2,0xc);
      iVar3 = FUN_01b38098(param_1[1],param_4,local_50,uVar4,local_40,0xc,param_4,param_5,param_3,5)
      ;
      iVar1 = 0;
      do {
        local_40[iVar1] = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xc);
    }
    iVar1 = 0;
    if (iVar3 == 1) {
      FUN_0192f148(param_4,param_5,0,uVar4,0,&DAT_01d25940);
      iVar1 = param_4;
    }
  }
  return CONCAT44(uVar4,iVar1);
}

