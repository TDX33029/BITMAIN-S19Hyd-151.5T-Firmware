// FUN_01b7df30 @ 01b7df30 size=144 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01b7df30(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_3 & 0x3f;
  uVar2 = -param_3 & 0x3f;
  return CONCAT44(param_2 << uVar1 | param_1 << (uVar1 - 0x20 & 0xff) |
                  param_1 >> (0x20 - uVar1 & 0xff) | param_2 >> uVar2,
                  param_1 << uVar1 |
                  param_1 >> uVar2 | param_2 << (0x20 - uVar2 & 0xff) |
                  param_2 >> (uVar2 - 0x20 & 0xff));
}

