// FUN_015941a8 @ 015941a8 size=60 calls_out=0 calls_in=0
// strings: array

void FUN_015941a8(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  iVar2 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                  | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) <<
                                1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18);
                    /* WARNING: Could not recover jumptable at 0x015941e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_array_01d328cc)[iVar2],*(undefined4 *)(&DAT_00537360 + iVar2 * 4));
  return;
}

