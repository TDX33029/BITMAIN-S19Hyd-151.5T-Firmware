// FUN_01596ac0 @ 01596ac0 size=64 calls_out=0 calls_in=0
// strings: Array

void FUN_01596ac0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)*param_1;
  iVar2 = LZCOUNT((uint)(byte)((((((((bVar1 & 1) << 1 | bVar1 >> 1 & 1) << 1 | bVar1 >> 2 & 1) << 1
                                  | bVar1 >> 3 & 1) << 1 | bVar1 >> 4 & 1) << 1 | bVar1 >> 5 & 1) <<
                                1 | bVar1 >> 6 & 1) << 1 | bVar1 >> 7) << 0x18);
                    /* WARNING: Could not recover jumptable at 0x01596afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))
            (*param_2,(&PTR_s_Array_01d328e8)[iVar2],*(undefined4 *)(&DAT_0053737c + iVar2 * 4));
  return;
}

