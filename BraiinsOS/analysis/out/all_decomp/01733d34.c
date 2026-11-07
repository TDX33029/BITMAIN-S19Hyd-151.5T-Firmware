// FUN_01733d34 @ 01733d34 size=228 calls_out=1 calls_in=6
// strings: 

void FUN_01733d34(uint param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 < param_2) {
    if (param_2 < param_1 + 0x44) goto LAB_01733dec;
  }
  else if ((param_1 != param_2) && (param_1 < param_2 + 0x44)) goto LAB_01733dec;
  uVar5 = param_2 + 0x44;
  uVar4 = param_1 + 0x44;
  FUN_016dd1aa(param_1,param_2,0x44);
  if (uVar4 < uVar5) {
    if (uVar5 < param_1 + 0x88) goto LAB_01733dec;
  }
  else if ((uVar4 != uVar5) && (uVar4 < param_2 + 0x88)) goto LAB_01733dec;
  uVar3 = param_2 + 0x88;
  uVar2 = param_1 + 0x88;
  FUN_016dd1aa(uVar4,uVar5,0x44);
  if (uVar2 < uVar3) {
    if (uVar3 < param_1 + 0xcc) {
LAB_01733dec:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0,0x1733dec);
      (*pcVar1)();
    }
  }
  else if ((uVar2 != uVar3) && (uVar2 < param_2 + 0xcc)) goto LAB_01733dec;
  FUN_016dd1aa(uVar2,uVar3,0x44);
  return;
}

