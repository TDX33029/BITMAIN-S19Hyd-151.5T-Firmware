// FUN_012900c0 @ 012900c0 size=216 calls_out=1 calls_in=4
// strings: internal error: entered unreachable code

void FUN_012900c0(undefined1 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x15;
    pcVar2 = 
    "input is out of rangeno possible date and time matching inputinput is not enough for unique date and timeinput contains invalid characterspremature end of inputtrailing input"
    ;
    break;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x28;
    pcVar2 = 
    "no possible date and time matching inputinput is not enough for unique date and timeinput contains invalid characterspremature end of inputtrailing input"
    ;
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x2c;
    pcVar2 = 
    "input is not enough for unique date and timeinput contains invalid characterspremature end of inputtrailing input"
    ;
    break;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x21;
    pcVar2 = "input contains invalid characterspremature end of inputtrailing input";
    break;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x16;
    pcVar2 = "premature end of inputtrailing input";
    break;
  case 5:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0xe;
    pcVar2 = "trailing input";
    break;
  case 6:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x20;
    pcVar2 = 
    "bad or unsupported format stringBUG: sysupgrade stderr was pipedclient::dispatch::Sender droppedTHERMAL_PAUSE_REASON_UNSPECIFIEDUnicode property value not foundinvalid IFLA_IPTUN_FLAGS for IP6ApproximateMinerPowerConsumptionapplication/vnd.kodak-descriptorstruct HwDetails with 7 elementsTLS_DHE_DSS_WITH_AES_128_CBC_SHAassertion failed: j < self.len()Telemetry action receiver closedio_stream is done, shutting downBUG: Boser context lock poisoned\x14\n"
    ;
    break;
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c26410);
  }
                    /* WARNING: Could not recover jumptable at 0x01290198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2,pcVar2,uVar1);
  return;
}

