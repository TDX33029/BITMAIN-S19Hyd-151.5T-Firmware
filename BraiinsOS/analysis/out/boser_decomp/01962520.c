// FUN_01962520 @ 01962520 size=216 calls_out=1 calls_in=1
// strings: 

void FUN_01962520(undefined4 *param_1,byte *param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0196183c(param_2,param_3,0x2e);
  if ((int)uVar4 != 0) {
    *(undefined8 *)(param_1 + 1) = uVar4;
    uVar1 = 0;
    goto LAB_019625f0;
  }
  if (param_3 == 0) {
LAB_019625b4:
    uVar1 = 1;
    param_1[1] = (param_4 & 0xff) << 8 | 1;
    param_1[2] = 0;
  }
  else {
    puVar2 = (undefined1 *)(uint)*param_2;
    if (0x7fffffff < (uint)(int)(char)*param_2) {
      if (puVar2 < (undefined1 *)0xe0) {
        puVar2 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
      }
      else {
        uVar3 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (puVar2 < (undefined1 *)0xf0) {
          puVar2 = (undefined1 *)(uVar3 | ((uint)puVar2 & 0x1f) << 0xc);
        }
        else {
          puVar2 = (undefined1 *)(param_2[3] & 0x3f | uVar3 << 6 | ((uint)puVar2 & 7) << 0x12);
          if (puVar2 == &DAT_00110000) goto LAB_019625b4;
        }
      }
    }
    param_1[1] = (param_4 & 0xff) << 8 | 3;
    param_1[2] = puVar2;
    uVar1 = 1;
  }
LAB_019625f0:
  *param_1 = uVar1;
  return;
}

