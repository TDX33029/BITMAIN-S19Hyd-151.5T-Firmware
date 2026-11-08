// FUN_018f696c @ 018f696c size=476 calls_out=4 calls_in=0
// strings: 

void FUN_018f696c(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_40 [4];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_68 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
             param_3 >> 0x18;
  local_6c = param_4 << 0x18 | (param_4 >> 8 & 0xff) << 0x10 | (param_4 >> 0x10 & 0xff) << 8 |
             param_4 >> 0x18;
  iVar1 = 0;
  local_70 = 0;
  do {
    *(byte *)((int)local_40 + iVar1 + -0x30) =
         *(byte *)((int)local_40 + iVar1 + -0x30) ^ *(byte *)(param_2 + 0x10 + iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  local_60 = local_70;
  uStack_5c = local_6c;
  uStack_58 = local_68;
  if ((param_8 < 0x10) ||
     (uVar4 = param_8 - 0x10, uVar3 = (*(uint **)(param_2 + 0x24))[1],
     uVar3 == 0 && (uVar4 <= **(uint **)(param_2 + 0x24)) <= uVar3)) {
    iVar1 = 0;
    do {
      *(undefined1 *)((int)local_40 + iVar1 + -0x20) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xc);
  }
  else {
    if (*(int *)(param_2 + 0x1c) - 5U < 2) {
      local_50 = local_70;
      uStack_4c = local_6c;
      uStack_48 = local_68;
      FUN_01bed4e2(local_40,param_7 + uVar4,0x10);
      local_30 = local_70;
      uStack_2c = local_6c;
      uStack_28 = local_68;
      iVar1 = FUN_01b37fa4(*(undefined4 *)(param_2 + 0x20),param_7,0,0,param_7,uVar4,local_40,0x1c,
                           param_5,param_6);
      iVar2 = 0;
      do {
        *(undefined1 *)((int)local_40 + iVar2 + -0x10) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
    }
    else {
      local_40[0] = local_70;
      local_40[1] = local_6c;
      local_40[2] = local_68;
      iVar1 = FUN_01b38098(*(undefined4 *)(param_2 + 0x20),param_7,&local_50,uVar4,local_40,0xc,
                           param_7,param_8,param_5,param_6);
      iVar2 = 0;
      do {
        *(undefined1 *)((int)local_40 + iVar2) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
    }
    if (iVar1 == 1) {
      FUN_0192f148(param_7,param_8,0,uVar4,0,&DAT_01d25940);
      *param_1 = 0x80000029;
      param_1[1] = param_7;
      param_1[2] = uVar4;
      return;
    }
  }
  *param_1 = 0x80000019;
  param_1[1] = 0;
  return;
}

