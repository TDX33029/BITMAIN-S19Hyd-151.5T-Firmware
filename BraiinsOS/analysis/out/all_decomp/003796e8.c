// FUN_003796e8 @ 003796e8 size=1 calls_out=0 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */

int FUN_003796e8(void)

{
  int iVar1;
  int unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *puVar2;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr15;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 uStack00000048;
  undefined4 in_stack_0000004c;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000054;
  undefined4 in_stack_00000058;
  undefined4 in_stack_0000005c;
  undefined4 in_stack_00000060;
  undefined4 uStack00000068;
  undefined4 in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000084;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000094;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a4;
  undefined1 in_stack_000000c0;
  undefined4 in_stack_000000c4;
  
  if (in_CY) {
    if (in_OV) {
      *(char *)(unaff_r4 + -0xf63) = (char)unaff_r6;
      coprocessor_function(4,2,3,in_cr6,in_cr15,in_cr1);
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_016dd1aa();
  in_stack_00000030 = CONCAT31(in_stack_00000030._1_3_,3);
  puVar2 = (undefined4 *)((uint)&uStack00000048 | 4);
  *puVar2 = in_stack_00000030;
  puVar2[1] = unaff_r7;
  puVar2[2] = unaff_r6;
  puVar2[3] = unaff_r7;
  puVar2[4] = in_stack_00000040;
  puVar2[5] = in_stack_00000044;
  in_stack_000000c4 = in_stack_0000000c;
  in_stack_000000c0 = 6;
  in_stack_00000088 = 0x8000001e;
  in_stack_0000008c = uStack00000048;
  in_stack_00000090 = in_stack_0000004c;
  in_stack_00000094 = in_stack_00000050;
  in_stack_00000098 = in_stack_00000054;
  in_stack_0000009c = in_stack_00000058;
  in_stack_000000a0 = in_stack_0000005c;
  in_stack_000000a4 = in_stack_00000060;
  uStack00000068 = in_stack_00000010;
  in_stack_0000006c = in_stack_00000014;
  in_stack_00000070 = in_stack_00000018;
  in_stack_00000074 = in_stack_0000001c;
  in_stack_00000078 = in_stack_00000020;
  in_stack_0000007c = in_stack_00000024;
  in_stack_00000080 = in_stack_00000028;
  in_stack_00000084 = in_stack_0000002c;
  iVar1 = thunk_FUN_016d4a50(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar1,&uStack00000068,0x80);
  return iVar1;
}

