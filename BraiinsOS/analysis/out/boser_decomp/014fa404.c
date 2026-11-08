// FUN_014fa404 @ 014fa404 size=256 calls_out=2 calls_in=1
// strings: [validity] at least two bytes should follow the `%` in a valid IRI reference | [validity] at least two bytes should follow the `%` in a valid IRI reference

void FUN_014fa404(char *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("[validity] at least two bytes should follow the `%` in a valid IRI reference",0x4c
                 ,&DAT_01cfa6d4);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("[validity] at least two bytes should follow the `%` in a valid IRI reference",0x4c
                 ,&DAT_01cfa6c4);
  }
  bVar1 = *param_2;
  bVar2 = param_2[1];
  if ((2 < param_3) && ((char)param_2[2] < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(param_2,param_3,2,param_3,&DAT_01cfa6e4);
  }
  bVar3 = bVar1 & 0xf0;
  *(byte **)(param_1 + 4) = param_2 + 2;
  *(uint *)(param_1 + 8) = param_3 - 2;
  bVar4 = bVar2 & 0xf0;
  *param_1 = bVar2 + (char)(0xa9c9d0 >>
                           ((((uint)(0x40 < bVar4) - (uint)(bVar4 < 0x40)) + 1 & 0x1f) << 3)) +
             (bVar1 + (char)(0xa9c9d0 >>
                            ((((uint)(0x40 < bVar3) - (uint)(bVar3 < 0x40)) + 1 & 0x1f) << 3))) *
             '\x10';
  return;
}

