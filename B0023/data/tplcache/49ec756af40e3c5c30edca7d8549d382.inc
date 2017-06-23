<li class='col-2-1 last not-animated' data-animate='fadeInUp'> 
                      <div class="entry-item">
                        <div class="time">
                          <p class="time-day">[field:pubdate function='strftime("%d",@me)'/]</p>
                          <p class="time-date">[field:pubdate function='strftime("%Y-%m",@me)'/]</p>
                        </div>
                        <div class="entry-title">
                          <h2><a href="[field:arcurl/]" target="_blank">[field:title/]</a></h2>
                        </div>
                        <div class="entry-summary">
                          <div class="qhd-content">
                            <div>[field:description function='cn_substr(@me,250)'/]...</div>
                            <div> &nbsp;</div>
                          </div>
                        </div>
                      </div>
                    </li>