// FUN_0159c570 @ 0159c570 size=328 calls_out=4 calls_in=2
// strings: 

void FUN_0159c570(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[8];
  puVar2 = param_1 + 10;
  uVar1 = param_1[0x1a];
  uVar5 = param_1[9];
  if (uVar1 == 0x40) {
    FUN_01590b9c(param_1,puVar2,1);
    uVar1 = 0;
  }
  else if (0x3f < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,0x40,&DAT_018a9f5c);
  }
  *(undefined1 *)((int)puVar2 + uVar1) = 0x80;
  param_1[0x1a] = uVar1 + 1;
  FUN_016dd606((int)puVar2 + uVar1 + 1,0,uVar1 ^ 0x3f);
  if (param_1[0x1a] - 0x39 < 8) {
    FUN_01590b9c(param_1,puVar2,1);
    if (0x40 < param_1[0x1a]) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_1[0x1a],0x40,&DAT_018a9f6c);
    }
    FUN_016dd606(puVar2,0);
  }
  param_1[0x18] =
       uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18;
  param_1[0x19] =
       uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18;
  FUN_01590b9c(param_1,puVar2,1);
  uVar1 = param_1[6];
  uVar3 = param_1[5];
  param_2[6] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = param_1[4];
  param_2[5] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
  param_2[4] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  uVar1 = param_1[7];
  param_2[3] = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
               uVar5 >> 0x18;
  uVar5 = *param_1;
  uVar3 = param_1[1];
  param_2[2] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
  param_2[1] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
  param_1[0x1a] = 0;
  param_2[7] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  *param_2 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
             uVar5 >> 0x18;
  return;
}

